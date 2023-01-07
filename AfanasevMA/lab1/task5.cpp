#include <iostream>
#include "rational.h"
#include <vector>

int main() {
    RationalNumber num;
    std::cout << "Enter number k" << std::endl;
    std::cin >> num;

    int n;
    std::cout << "Enter element count of A" << std::endl;
    std::cin >> n;

    std::cout << "Enter elements of A one by one" << std::endl;
    std::vector<RationalNumber> sum, sub, mul, div;
    for (int i = 0; i < n; ++i) {
        RationalNumber t;
        std::cin >> t;
        sum.push_back(t + num);
        sub.push_back(t - num);
        mul.push_back(t * num);
        div.push_back(t / num);
    }
    std::cout << "i; A_i + k; A_i - k; A_i * k; A_i / k" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << i << "; " << sum[i] << "; " << sub[i] << "; " << mul[i] << "; " << div[i] << std::endl;
    }
}
