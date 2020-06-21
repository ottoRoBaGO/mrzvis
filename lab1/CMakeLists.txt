cmake_minimum_required(VERSION 3.15)
project(Laba1)

set(CMAKE_CXX_STANDARD 17)


set(SOURCE_FILES main.cpp
        BinaryCalculator.cpp
        BinaryCalculator.h
        Pipeline.cpp
        Pipeline.h
        )

add_executable(Laba1 ${SOURCE_FILES})
