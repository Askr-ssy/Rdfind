cmake_minimum_required(VERSION 3.1)
project(Rdfind)

IF (CMAKE_SYSTEM_NAME MATCHES "Linux")
    MESSAGE(STATUS "current platform: Linux ")
    execute_process(COMMAND sh bootstrap.sh WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/boost_1_75_0)
    MESSAGE(STATUS )
    execute_process(COMMAND b2 WORKING_DIRECTORY boost_1_75_0)

ELSEIF (CMAKE_SYSTEM_NAME MATCHES "Windows")
    MESSAGE(STATUS "current platform: Windows")
ENDIF (CMAKE_SYSTEM_NAME MATCHES "Linux")
MESSAGE(STATUS "build filesystem")


set (CMAKE_CXX_STANDARD 11)
# use boost.filesystem
include_directories(Rdfind include)
# add_executable(rdfind main.cpp)
 
