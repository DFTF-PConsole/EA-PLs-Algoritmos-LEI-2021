cmake_minimum_required(VERSION 3.17)
project(Projeto)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-Wall -Wextra")

add_executable(Projeto main.cpp)