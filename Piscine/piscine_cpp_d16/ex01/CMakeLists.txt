cmake_minimum_required(VERSION 3.3)
project(ex01)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp DomesticKoala.cpp DomesticKoala.h)
add_executable(ex01 ${SOURCE_FILES})