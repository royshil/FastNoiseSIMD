cmake_minimum_required(VERSION 3.2)

project(FastNoiseSIMD)

find_package(OpenCV)

set (CMAKE_CXX_STANDARD 11)

file(GLOB SOURCES *.cpp *.c *.cxx)

add_library(FastNoiseSIMD ${SOURCES})

include_directories(/usr/local/include)

add_executable(noise noise.cpp)
target_link_libraries(noise FastNoiseSIMD ${OpenCV_LIBS})
