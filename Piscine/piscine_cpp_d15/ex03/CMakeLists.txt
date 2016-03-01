cmake_minimum_required(VERSION 3.3)
project(ex03)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ex03.hpp)
add_executable(ex03 ${SOURCE_FILES})