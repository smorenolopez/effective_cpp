cmake_minimum_required(VERSION 3.15)
project(effective_cpp)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(src/item_17)

add_executable(effective_cpp main.cpp)