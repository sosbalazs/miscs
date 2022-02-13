cmake_minimum_required(VERSION 3.22)

# set the project name
project(CMakeDemo)

# include directories
include_directories(include)

set(SOURCES 
src/main.cpp 
src/A.cpp)

# add the executable
add_executable(CMakeDemo ${SOURCES})