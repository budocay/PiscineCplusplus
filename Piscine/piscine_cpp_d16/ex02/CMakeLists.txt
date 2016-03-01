cmake_minimum_required(VERSION 3.3)

include_directories(ex02)

project(ex02)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Event.cpp EventManager.cpp Event.h)
add_executable(ex02 ${SOURCE_FILES})