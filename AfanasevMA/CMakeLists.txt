cmake_minimum_required(VERSION 3.23)

set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")

project(afanasev)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab1_task1 lab1/task1.cpp lab1/rational.h lab1/rational.cpp)
add_executable(lab1_task2 lab1/task2.cpp lab1/rational.h lab1/rational.cpp)
add_executable(lab1_task3 lab1/task3.cpp lab1/rational.h lab1/rational.cpp)
add_executable(lab1_task4 lab1/task4.cpp lab1/rational.h lab1/rational.cpp)
add_executable(lab1_task5 lab1/task5.cpp lab1/rational.h lab1/rational.cpp)
add_executable(lab1_task6 lab1/task6.cpp lab1/rational.h lab1/rational.cpp)
add_executable(lab1_task7 lab1/task7.cpp lab1/rational.h lab1/rational.cpp)
add_executable(lab1_task8 lab1/task8.cpp lab1/rational.h lab1/rational.cpp)
add_executable(lab1_task9 lab1/task9.cpp lab1/rational.h lab1/rational.cpp)
add_executable(lab1_task10 lab1/task10.cpp lab1/rational.h lab1/rational.cpp)
add_executable(lab1_task11 lab1/task11.cpp lab1/rational.h lab1/rational.cpp)

add_executable(contest1_a contest1/a.cpp)
add_executable(contest1_b contest1/b.cpp)
add_executable(contest1_c contest1/c.cpp)
add_executable(contest1_d contest1/d.cpp)
add_executable(contest1_e contest1/e.cpp)
add_executable(contest1_f contest1/f.cpp)
add_executable(contest1_g contest1/g.cpp)
add_executable(contest1_h contest1/h.cpp)


add_executable(contest2_a contest2/a.cpp)
add_executable(contest2_b contest2/b.cpp)
add_executable(contest2_c contest2/c.cpp)
add_executable(contest2_d contest2/d.cpp)
add_executable(contest2_e contest2/e.cpp)
add_executable(contest2_f contest2/f.cpp)
add_executable(contest2_g contest2/g.cpp)


add_executable(contest3_a contest3/a.cpp)
add_executable(contest3_b contest3/b.cpp)
add_executable(contest3_c contest3/c.cpp)