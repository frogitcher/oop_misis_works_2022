cmake_minimum_required(VERSION 3.23)

set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")

project(afanasev_control_work)

set(CMAKE_CXX_STANDARD 17)

add_executable(task_1 tasks/1.h tasks/1.cpp)
add_executable(task_2 tasks/2.cpp)
add_executable(task_3 tasks/3.cpp)
add_executable(task_4 tasks/4.cpp)