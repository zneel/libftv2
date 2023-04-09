#!/bin/bash

exit_status=0

for test_executable in tests/*.out; do
    echo "Running $test_executable"
    ./$test_executable
    result=$?
    if [ $result -ne 0 ]; then
        exit_status=1
    fi
    echo "-----------------------------"
done

exit $exit_status
