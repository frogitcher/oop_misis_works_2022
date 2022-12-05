cmake_minimum_required(VERSION 3.0)
project(hello_world)

if(MSVC)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17")
endif(MSVC)

add_executable(A "A.cpp")
add_executable(B "B.cpp")
add_executable(C "C.cpp")
add_executable(D "D.cpp")
add_executable(E "E.cpp")
add_executable(F "F.cpp")
add_executable(G "G.cpp")