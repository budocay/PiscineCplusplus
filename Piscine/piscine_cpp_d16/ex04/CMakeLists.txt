cmake_minimum_required(VERSION 3.3)
project(ex04)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Ratatouille.cpp Ratatouille.h)
add_executable(ex04 ${SOURCE_FILES})