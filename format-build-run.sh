#!/bin/bash

set -e

formatted=`clang-format-9 main.cpp`
if [[ $(< main.cpp) != "$formatted" ]]; then
	echo "Formatting updated, saving changes..."
	touch main.cpp.back1 main.cpp.back0
	cp main.cpp.back0 main.cpp.back1
	cp main.cpp main.cpp.back0
	echo "$formatted" > main.cpp
fi

cmake -H. -B"Build/release" -DCMAKE_BUILD_TYPE=Release

cmake --build "Build/release" -j 2

Build/release/flecs_bench "${@}"
