cmake_minimum_required(VERSION 3.23)
project(DiagonalMatrix C)

set(CMAKE_C_STANDARD 99)

add_executable(DiagonalMatrix main.c diagonal.cpp diagonal.h)
