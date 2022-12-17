#include <iostream>
#include "Number.h"
#include "Number.cpp"

void Task1() {
    Number a(4, 5);
    Number  b(3, 5);
    std::cout << (a * b).AsString();
}


int main() {
    Task1();
}
