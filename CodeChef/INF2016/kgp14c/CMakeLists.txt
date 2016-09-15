cmake_minimum_required(VERSION 3.5)
project(kgp14c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    kgp14c.cpp)

add_executable(kgp14c ${SOURCE_FILES})