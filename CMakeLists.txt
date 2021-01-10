cmake_minimum_required(VERSION 3.1)
project(Rdfind)

IF (CMAKE_SYSTEM_NAME MATCHES "Linux")
    MESSAGE(STATUS "current platform: Linux ")
    if (NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/boost_1_75_0/b2")
        execute_process(COMMAND sh bootstrap.sh --prefix=${CMAKE_CURRENT_SOURCE_DIR} WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/boost_1_75_0)
        execute_process(COMMAND ./b2 WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/boost_1_75_0)
        execute_process(COMMAND ./b2 install WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/boost_1_75_0)
    endif()
ELSEIF (CMAKE_SYSTEM_NAME MATCHES "Windows")
    MESSAGE(STATUS "current platform: Windows")
ENDIF (CMAKE_SYSTEM_NAME MATCHES "Linux")
MESSAGE(STATUS "build filesystem")


set (CMAKE_CXX_STANDARD 11)
# use boost.filesystem
include_directories(Rdfind include)
link_directories(lib)
add_executable(rdfind main.cpp)
target_link_libraries(rdfind boost_filesystem)