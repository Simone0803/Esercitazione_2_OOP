cmake_minimum_required(VERSION 3.20)
project(complex_numbers)

set(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_STANDARD-REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wshadow")

add_executable(complex_numbers complex_numbers.cpp)