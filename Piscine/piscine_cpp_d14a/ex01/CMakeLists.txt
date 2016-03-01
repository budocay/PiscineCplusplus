cmake_minimum_required(VERSION 3.3)
project(ex01)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++03 -Wall -Wextra")

set(SOURCE_FILES WaterReclaimer.cpp RoverUnitTests.cpp Oxygenator.cpp Errors.cpp Engine.cpp AtmosphereRegulator.cpp)
add_executable(ex01 ${SOURCE_FILES})