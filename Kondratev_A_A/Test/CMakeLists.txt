cmake_minimum_required(VERSION 3.0)
project(hello_world)

add_executable(main
        ../../doctest.h
        main.cpp
        Source.cpp
        header.h
        )