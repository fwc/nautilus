#!/usr/bin/env bash

set -euo pipefail

if [ "$#" -ne 2 ]
then
	cat << EOF
Usage:

$0 YARPGEN_EXE NUM_CASES

EOF
	exit 1
fi

YARPGEN=$1
NUM_CASES=$2

if ! $YARPGEN --version | grep yarpgen > /dev/null
then
	echo first arg doesn\'t seem to be yarpgen?!
	exit 1
fi

for i in $(seq $NUM_CASES)
do
	mkdir -p test_$i	
	pushd test_$i > /dev/null
	$YARPGEN --nautilus=true --seed=$i
	popd > /dev/null
done

for i in $(seq $NUM_CASES)
do
	if [ -f test_$i/naut.cpp ]
	then
		wc -l test_$i/naut.cpp
	fi
done | sort -n > test_sizes.txt

tmp=$(mktemp)

for i in $(seq $NUM_CASES)
do
	if [ -f test_$i/naut.cpp ]
	then
		echo "add_executable(test_$i test_$i/naut.cpp)" >> "$tmp"
		echo "target_link_libraries(test_$i PRIVATE nautilus)" >> "$tmp"
	fi
done

head test_sizes.txt

echo cmake snippen is in $tmp
