#!/usr/bin/env bash

set -e
set -u
shopt -s nullglob

git status > /dev/null
if ! git diff-files --quiet
then
    echo requires clean working tree
    exit 1
fi

out_log=$(pwd)/mutanalysis_$(date -u +"%Y-%m-%dT%H-%M-%S").log
log_out() {
    echo "$(date -Is) $*" | tee -a $out_log
}

export out_log

cmake -B build
cmake --build build -j $(nproc)

echo build donezo

rm -rf mutations
python3 standalone_mutator.py -o mutations $(git ls-files -- "*.cpp" "*.hpp" | grep "^naut" | grep -v test | grep -v "backends/bc" | grep -v "backends/cpp" | grep -v "backends/amsjit")

export working_tests=$(mktemp)
export broken_tests=$(mktemp)

log_out working tests written out to $working_tests
log_out broken tests written out to $broken_tests

find build/nautilus/test/yarpgened -type f -name "*_test_*" -print0 | xargs -0 --max-procs=$(nproc) -I {} sh -c "timeout 1m ./{} > /dev/null 2> /dev/null && echo {} >> $working_tests || echo {} >> $broken_tests"

ctest --test-dir build/nautilus/ -N | grep "  Test" | awk -F": " '{ print "ctestcase::" $2 }' | sed "s/ /_/g" | tee -a $out_log

cat $working_tests | tee -a $out_log

for patch in $(find mutations -name "*.patch" | shuf)
do
    git status > /dev/null
    if ! git diff-files --quiet
    then
        log_out expected clean worktree
        exit 1
    fi

    cmake --build build --target clean

    log_out checking $patch
    patched_file=$(head -n 1 $patch | cut -d" " -f 2)
    cp $patched_file $patched_file.bak
    if ! patch --forward $patched_file < $patch
    then
        log_out cannot apply $patch
        mv $patched_file.bak $patched_file
        continue
    fi

    if ! cmake --build build -j $(nproc) > /dev/null 2> /dev/null
    then
        log_out cannot build $patch
        mv $patched_file.bak $patched_file
        continue
    fi

    log_out running ctest
    if ! timeout --kill-after=10s 1m ctest -j $(nproc) --test-dir build/nautilus --quiet --output-junit junit.xml
    then
        for testcase in $(cat build/nautilus/junit.xml | grep 'status="fail"' | awk -F'"' '{ print $2 }' | sed "s/ /_/g")
        do
            log_out mutant $patch killed by ctest with $testcase
        done
    fi


    log_out running yarpgen tests

    cat $working_tests | xargs --max-procs=$(nproc) -I {} timeout 1m sh -c './{} > /dev/null 2> /dev/null || echo mutant $patch killed by $(basename {}) with $?' | tee -a $out_log || true
    mv $patched_file.bak $patched_file
done
