cmake_minimum_required(VERSION 3.6)
project(cmake)

set(CMAKE_CXX_STANDARD 14)
include_directories(..s)
set(SOURCE_FILES ../main.cpp)
add_executable(cmake ${SOURCE_FILES})