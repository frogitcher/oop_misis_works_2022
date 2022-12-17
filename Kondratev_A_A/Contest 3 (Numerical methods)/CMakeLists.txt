cmake_minimum_required(VERSION 3.0)
project(hello_world)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/angle1.in
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/angle1.out
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
add_executable(A "A.cpp")
add_executable(B "B.cpp")
add_executable(C "C.cpp")