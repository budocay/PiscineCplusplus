cmake_minimum_required(VERSION 3.3)
project(ex01)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ex01.hpp)
add_executable(ex01 ${SOURCE_FILES})