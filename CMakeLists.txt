cmake_minimum_required(VERSION 3.1)
project(Rdfind)

# export CC=/usr/bin/gcc-9
# export CXX=/usr/bin/g++-9

set (CMAKE_CXX_STANDARD 17)

include_directories(Rdfind include)
link_directories(lib)

add_subdirectory(include)
add_executable(rdfind main.cpp)

target_link_libraries(rdfind hash)
target_link_libraries(rdfind ssl)
target_link_libraries(rdfind crypto)