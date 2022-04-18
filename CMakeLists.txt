cmake_minimum_required(VERSION 3.22)

# set the project name
project(Miscs)

# include directories
include_directories(include)

set(SOURCES 
src/main.cpp 
#
src/String.cpp
src/StringTester.cpp
#
src/IntIterator.cpp
src/IteratorTester.cpp
#
src/Dequeue.cpp
src/DequeueTester.cpp
#
src/Queue.cpp
src/QueueTester.cpp)

# add the executable
add_executable(Miscs ${SOURCES})