cmake_minimum_required(VERSION 3.7)
project(CyclicRotation)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c CyclicRotation.c CyclicRotation.h)
add_executable(CyclicRotation ${SOURCE_FILES})