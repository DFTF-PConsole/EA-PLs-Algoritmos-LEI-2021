cmake_minimum_required(VERSION 3.19)
project(PL12_K)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-Wall -Wextra")

add_executable(PL12_K main.cpp)