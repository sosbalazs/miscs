cmake_minimum_required(VERSION 3.22)

# set the project name
project(Miscs)

# include directories
include_directories(include)

set(SOURCES 
src/main.cpp 
src/String.cpp
src/StringTester.cpp)

# add the executable
add_executable(Miscs ${SOURCES})