cmake_minimum_required(VERSION 3.8)
project(Parser_Marty_Spiewak)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES parser.c structures.h firsts.h)
add_executable(Parser_Marty_Spiewak ${SOURCE_FILES})