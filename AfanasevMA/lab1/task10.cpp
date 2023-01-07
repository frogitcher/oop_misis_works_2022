#include <iostream>
#include "rational.h"
#include <vector>

int main() {
    int n;
    std::cout << "Enter element count" << std::endl;
    std::cin >> n;
    std::cout << "Enter elements one by one" << std::endl;
    std::vector<RationalNumber> nums;
    for (int i = 0; i < n; ++i) {
        RationalNumber t;
        std::cin >> t;
        nums.push_back(t);
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if (j == i) {
                continue;
            }
            auto A_i = nums[i];
            auto A_j = nums[j];
            if((A_i + A_j).GetDenominator() == 1) {
                std::cout << "i j A[i] A[j]" << std::endl;
                std::cout << i << ' ' << j << ' ' << A_i << ' ' << A_j << std::endl;
                return 0;
            }
        }
    }
    std::cout << "No answer";
}
