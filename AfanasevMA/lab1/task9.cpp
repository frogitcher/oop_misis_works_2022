#include <iostream>
#include "rational.h"
#include <vector>

int main() {
    std::cout << "A1*X + B1*Y = C1; A2*X + B1*Y = C2" << std::endl;
    std::cout << "Enter A1, B1, C1" << std::endl;
    RationalNumber A1, B1, C1;
    std::cin >> A1 >> B1 >> C1;
    std::cout << "Enter A2, B2, C2" << std::endl;
    RationalNumber A2, B2, C2;
    std::cin >> A2 >> B2 >> C2;
    RationalNumber det_main = A1 * B2 - B1 * A2;
    RationalNumber det_sec_1 = C1 * B2 - B1 * C2;
    RationalNumber det_sec_2 = A1 * C2 - C1 * A2;
    if ((det_main == 0) && (det_sec_1 != 0 || det_sec_2 != 0)) {
        std::cout << "No answer" << std::endl;
    }
    else if (det_main == 0 && det_sec_1 == 0 && det_sec_2 == 0) {
        std::cout << "Infinite answers" << std::endl;
    }
    else {
        RationalNumber X = det_sec_1 / det_main;
        RationalNumber Y = det_sec_2 / det_main;
        std::cout << "One answer: " << X << ", " << Y << std::endl;
    }

}
