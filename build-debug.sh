#!/bin/bash

set -e
set -x

rm -rf build-debug
mkdir build-debug
cd build-debug

conan install .. -s build_type=Debug
cmake .. -DCMAKE_BUILD_TYPE=Debug
cmake --build .