#include <iostream>
#include "rational.h"

int main() {
    std::cout << "Enter something (e. g. '1/2' for a fractional number or '1' for an integer number)" << std::endl;
    try {
        RationalNumber num;
        std::cin >> num;
        std::cout << "Yes";
    }
    catch (std::invalid_argument& ie) {
        std::cout << "No";
    }
}
