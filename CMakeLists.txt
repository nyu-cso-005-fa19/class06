cmake_minimum_required(VERSION 3.0)
project(cso-class05)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c11")

set(SOURCE_FILES1 src/linked-list.c src/list-test.c)
add_executable(list-test ${SOURCE_FILES1})
