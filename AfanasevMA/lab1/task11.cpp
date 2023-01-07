#include <iostream>
#include "rational.h"
#include <vector>

bool check_ok(std::vector<RationalNumber>& subnums) {
    RationalNumber sum;
    for(auto & subnum : subnums) {
        sum += subnum;
    }
    return sum.GetDenominator() == 1;
}

bool depth(std::vector<RationalNumber>& nums, std::vector<RationalNumber>& subnums, int k) {
    if (k == nums.size()) {
        if (!subnums.empty()) {
            if (check_ok(subnums))
                return true;
        }
    } else {
        subnums.push_back(nums[k]);
        bool res = depth(nums, subnums, k + 1);
        if (res) {
            return true;
        }
        subnums.pop_back();
        res = depth(nums, subnums, k + 1);
        if (res) {
            return true;
        }
    }
    return false;
}

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
    std::vector<RationalNumber> results = std::vector<RationalNumber>{};
    auto ret = depth(nums, results, 0);
    if (ret) {
        for(auto& num : results) {
            std::cout << num << ' ';
        }
        std::cout << std::endl;
    }
    else {
        std::cout << "No answer";
    }
}
