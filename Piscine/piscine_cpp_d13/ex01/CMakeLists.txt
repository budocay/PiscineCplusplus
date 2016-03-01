cmake_minimum_required(VERSION 3.3)
project(ex00)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Picture.cpp Picture.h Toy.cpp Toy.h main.cpp)
add_executable(ex00 ${SOURCE_FILES})