#include <iostream>
#include "rational.h"
#include <vector>

int main() {
    int n;
    std::cout << "Enter element count" << std::endl;
    std::cin >> n;

    std::cout << "Enter elements one by one" << std::endl;
    RationalNumber min;
    RationalNumber max;
    for (int i = 0; i < n; ++i) {
        RationalNumber t;
        std::cin >> t;
        if (i == 0 || t < min) {
            min = t;
        }
        if (i == 0 || t > max) {
            max = t;
        }
    }
    std::cout << "min = " << min << " max = " << max << std::endl;
}
