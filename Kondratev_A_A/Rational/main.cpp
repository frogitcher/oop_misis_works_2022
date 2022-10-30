#include <iostream>
#include <string>
#include "Rational.h"
#include "Tasks.h"

int main() {
    int number = 0;
    std::cout << "Choose the task from 1 to 11: ";
    std::cin >> number;
    switch (number) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
            break;
        case 6:
            task6();
            break;
        case 7:
            std::cin.get();
            task7();
            break;
        case 8:
            task8();
            break;
        case 9:
            task1B();
            break;
        case 10:
            task2B();
            break;
        case 11:
            task3B();
            break;
    }
}