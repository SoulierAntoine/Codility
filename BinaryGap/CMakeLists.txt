cmake_minimum_required(VERSION 3.7)
project(BinaryGap)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c binary_gap.c binary_gap.h)
add_executable(BinaryGap ${SOURCE_FILES})