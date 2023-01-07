#include <iostream>
#include "rational.h"
#include <vector>

int main() {
    int n;
    std::cout << "Enter element count" << std::endl;
    std::cin >> n;
    std::cout << "Enter elements one by one" << std::endl;
    RationalNumber mul{1, 1};
    RationalNumber sum{0, 1};
    for (int i = 0; i < n; ++i) {
        RationalNumber t;
        std::cin >> t;
        mul *= t;
        sum += t;
    }
    std::cout << "mul = " << mul << " sum = " << sum << std::endl;
}
