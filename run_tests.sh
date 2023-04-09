#!/bin/bash

for test_executable in tests/*.out; do
    echo "Running $test_executable"
    ./$test_executable
    echo "-----------------------------"
done