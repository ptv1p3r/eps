cmake_minimum_required(VERSION 3.6)
project(eps)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c eps.c eps.h)
add_executable(eps ${SOURCE_FILES})