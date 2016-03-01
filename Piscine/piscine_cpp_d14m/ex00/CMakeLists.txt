cmake_minimum_required(VERSION 3.3)
project(ex00)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Fruit.cpp Fruit.h Lemon.cpp Lemon.h Banana.cpp Banana.h FruitBox.cpp FruitBox.h FruitNode.h)
add_executable(ex00 ${SOURCE_FILES})