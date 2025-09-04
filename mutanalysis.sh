#!/usr/bin/env bash

set -e
set -u
shopt -s nullglob

# export CCACHE_DIR=/ccache
# 
# if [ ! -d /out ] || [ ! -d /ccache ]
# then
#     echo expects /out and /ccache to exist
#     exit 1
# fi

out_dir=$(pwd)/out/mutanalysis_$(date -u +"%Y-%m-%dT%H-%M-%S")
mkdir -p $out_dir/crashes

out_log=$out_dir/log.txt
log_out() {
    echo "$(date -Is) $*" | tee -a $out_log
}

cmake -B build

python3 standalone_mutator.py -o mutations $(git ls-files -- "*.cpp" "*.hpp" | grep "^naut" | grep -v test)

working_tests=$(mktemp)

for ytest in $(find build/nautilus/test/yarpgened -type f -name "*_test_*")
do
    ./$ytest > /dev/null 2> /dev/null && echo $ytest >> $working_tests || true
done

for patch in $(find mutations -name "*.patch" -print0 | xargs -0 sha256sum | sort | awk '{ print $2 }')
do
    log_out checking $patch
    if ! python3 check_mutations.py $patch build/compile_commands.json || ! cmake --build build -j $(nproc) -- -k
    then
        log_out cannot build $patch
        continue
    fi

    log_out running ctest
    if ! timeout --kill-after=10s 1m ctest -j $(nproc) --test-dir build/nautilus --stop-on-failure --quiet -O ctest.log
    then
        for testcase in $(cat ctest.log | grep Failed | awk '$2 == "-" { print $3 }')
        do
            log_out mutant $patch killed by ctest with $testcase
        done
    fi


    log_out running yarpgen tests

    for ytest in $(cat $working_tests)
    do
        ./$ytest > /dev/null 2> /dev/null || echo mutant $patch killed by $(basename $ytest)
    done
done
