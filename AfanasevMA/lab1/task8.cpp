#include <iostream>
#include "rational.h"

int main() {
    std::cout << "A * X = B" << std::endl;
    std::cout << "Enter A" << std::endl;
    RationalNumber A;
    std::cin >> A;
    std::cout << "Enter B" << std::endl;
    RationalNumber B;
    std::cin >> B;
    RationalNumber X = B / A;
    std::cout << "X = " << X;
}
