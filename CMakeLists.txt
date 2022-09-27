cmake_minimum_required(VERSION 3.23)
project(rush_c_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(cpp-primer-plus)

add_executable(rush_c_cpp
        cpp-primer-plus/p2/carrot.cpp
        cpp-primer-plus/p2/myfirst.cpp
        cpp-primer-plus/p2/sqrt.cpp
        cpp-primer-plus/p3/bondini.cpp
        cpp-primer-plus/p3/floatnum.cpp
        cpp-primer-plus/p3/fltadd.cpp
        cpp-primer-plus/p3/typecast.cpp)
