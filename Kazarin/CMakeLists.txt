cmake_minimum_required(VERSION 3.0)
project(hello_world)

add_executable(main
	../doctest.h
	HelloWorld.h
	HelloWorld.cpp
	Test.cpp
)