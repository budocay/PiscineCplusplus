cmake_minimum_required(VERSION 3.3)
project(ex04)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ex04.cpp ex04.hpp)
add_executable(ex04 ${SOURCE_FILES})