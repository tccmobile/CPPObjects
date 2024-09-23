cmake_minimum_required(VERSION 3.29)
project(CPPObjects)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPPObjects main.cpp
        Person.cpp
        Person.h)
