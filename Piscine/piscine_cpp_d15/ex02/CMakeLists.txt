cmake_minimum_required(VERSION 3.3)
project(ex02)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++03 -Wall -Wextra")

set(SOURCE_FILES main.cpp ex02.hpp)
add_executable(ex02 ${SOURCE_FILES})