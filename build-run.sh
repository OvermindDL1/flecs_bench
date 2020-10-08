#!/bin/bash

set -e

cmake -H. -B"Build/release" -DCMAKE_BUILD_TYPE=Release

cmake --build "Build/release" -j 2

Build/release/flecs_bench "${@}"
