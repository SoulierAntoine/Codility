cmake_minimum_required(VERSION 3.7)
project(OddOccurencesInArray)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c OddOccurencesInArray.c OddOccurencesInArray.h)
add_executable(OddOccurencesInArray ${SOURCE_FILES})