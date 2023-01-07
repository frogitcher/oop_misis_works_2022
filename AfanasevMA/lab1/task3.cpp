#include <iostream>
#include "rational.h"

int main() {
    RationalNumber num1, num2;
    std::cout << "Enter two rational numbers (e. g. '1/2 5/15' or '1 10')" << std::endl;
    std::cin >> num1 >> num2;
    std::cout << "max = " << std::max(num1, num2) << " min = " << std::min(num1, num2) << std::endl;
}
