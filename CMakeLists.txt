cmake_minimum_required(VERSION 2.8)
project(timer)

add_definitions(-std=c++0x)
set(CMAKE_VERBOSE_MAKEFILE false)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O3 -mtune=native -ffast-math -funroll-loops" )
set(CMAKE_CXX_LINK_FLAGS "${CMAKE_CXX_LINK_FLAGS}")


add_library(timer timer.cpp)

#target_link_libraries(timer)

