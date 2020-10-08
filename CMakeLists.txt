cmake_minimum_required(VERSION 3.13)
project(flecs_bench)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Threads)

add_executable(flecs_bench flecs.c main.cpp)
target_link_libraries(flecs_bench ${CMAKE_THREAD_LIBS_INIT})
