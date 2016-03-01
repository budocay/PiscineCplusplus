cmake_minimum_required(VERSION 3.3)
project(piscine_cpp_d13)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES ex02/Buzz.cpp ex02/Buzz.h ex02/Woody.cpp ex02/Woody.h)
add_executable(piscine_cpp_d13 ${SOURCE_FILES})