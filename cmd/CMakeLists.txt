cmake_minimum_required(VERSION 3.25)
project(cmd)

set(CMAKE_CXX_STANDARD 17)

add_library(cmd SHARED library.cpp )
