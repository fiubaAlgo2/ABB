cmake_minimum_required(VERSION 3.16)
project(ABB)

set(CMAKE_CXX_STANDARD 14)
file(GLOB SOURCE_FILES *.cpp)

add_executable(ABB main.cpp)