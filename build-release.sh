#!/bin/bash

set -e
set -x

rm -rf build-release
mkdir build-release
cd build-release

conan install .. -s build_type=Release
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build .