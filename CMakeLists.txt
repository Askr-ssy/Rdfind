cmake_minimum_required(VERSION 3.1)
project(Rdfind)

set (CMAKE_CXX_STANDARD 11)
# use boost.filesystem
include_directories(Rdfind include)
add_executable(rdfind main.cpp)

