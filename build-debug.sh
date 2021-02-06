#!/bin/bash

set -e
set -x

rm -rf build
mkdir build
cd build

conan install .. -s build_type=Debug
cmake .. -DCAMKE_BUILD_TYPE=Debug
cmake --build .