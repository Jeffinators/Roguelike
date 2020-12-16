#!/usr/bin/env bash
set -ex

cmake_args=
CLANG=
command -v clang > /dev/null && CLANG=1

if [ "$CLANG" ]; then
	cmake_args="-DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++"
fi

# Generate project files
mkdir -p build-linux
cd build-linux
cmake .. -GNinja ${cmake_args}
