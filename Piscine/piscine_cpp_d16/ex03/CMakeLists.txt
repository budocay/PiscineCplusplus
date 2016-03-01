cmake_minimum_required(VERSION 3.3)
project(ex03)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp BF_Translator.cpp BF_Translator.h)
add_executable(ex03 ${SOURCE_FILES})