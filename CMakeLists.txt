cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        labs5.cpp
        lab_5.2.cpp)

add_executable(labs5 labs5.cpp)
add_executable(lab_5.2 lab_5.2.cpp)