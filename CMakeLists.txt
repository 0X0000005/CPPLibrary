cmake_minimum_required(VERSION 3.10)
project(cppLibrary)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)

add_library(cppLibrary SHARED library.cpp)
