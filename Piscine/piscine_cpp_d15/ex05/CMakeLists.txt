cmake_minimum_required(VERSION 3.3)
project(ex05)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ex05.hpp)
add_executable(ex05 ${SOURCE_FILES})