cmake_minimum_required(VERSION 3.23)
project(rational)

set(CMAKE_CXX_STANDARD 20)

add_executable(rational main.cpp
        Rational.cpp
        Rational.h
        Test.cpp)
