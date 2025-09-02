#!/usr/bin/env bash

set -e
set -u

if ! gcovr --version | grep "gcovr 8.3" > /dev/null
then
    echo pls run with gcovr version 8.3
    exit 1
fi

rm -rf build

cov_out=cov-$(date -Is)

mkdir $cov_out

cmake -B build -DCMAKE_BUILD_TYPE=RelWithDebug -DENABLE_TEST_COVERAGE=ON
cmake --build build -j $(nproc) -- -k || true

ctest --test-dir build/nautilus
time gcovr --gcov-executable "llvm-cov-19 gcov" --json $cov_out/ts_gcovr_all.json --json-summary $cov_out/ts_gcovr_sum.json --html-details $cov_out/ts_html/

find -name "*.gcda" -delete

i=0
for it in $(find build/nautilus/test/yarpgened/ -type f -name "interp_test_*")
do
    ct=$(echo $it | sed "s/interp/compil/")
    echo running $i $(basename $it | sed "s/interp_//")

    $it > /dev/null 2> /dev/null || true
    $ct > /dev/null 2> /dev/null || true


    if [ $(( i % 10 )) = 0 ]
    then
        pi=$(printf '%03d' $(( i / 10 )) )
        time gcovr --gcov-executable "llvm-cov-19 gcov" --json $cov_out/$pi-gcovr_all.json --json-summary $cov_out/$pi-gcovr_sum.json --html-details $cov_out/$pi-html/
    fi

    i=$(( $i + 1 ))
done

time gcovr --gcov-executable "llvm-cov-19 gcov" --json $cov_out/$pi-gcovr_all.json --json-summary $cov_out/$pi-gcovr_sum.json --html-details $cov_out/$pi-html/
