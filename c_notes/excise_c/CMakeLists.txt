cmake_minimum_required(VERSION 3.24)
project(excise_c C)

set(CMAKE_C_STANDARD 99)

add_executable(excise_c main.c test.c test.h)
