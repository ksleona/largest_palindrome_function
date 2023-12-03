cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        finki/labs5.cpp
        finki/lab_5.2.cpp)

add_executable(labs5 finki/labs5.cpp)
add_executable(lab_5.2 finki/lab_5.2.cpp)
add_executable(main main.cpp
        sturkturno_nizi.cpp)
add_executable(sturkturno_nizi sturkturno_nizi.cpp)