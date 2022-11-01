//
// Created by Максим Афанасьев on 30.10.2022.
//

#include <iostream>


int main() {
    long int n = 0;
    std::cin >> n;
    long int nums[n];
    long int min_power = INT32_MAX;
    long int max_power = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
        if (nums[i] < min_power) {
            min_power = nums[i];
        }
        if (nums[i] > max_power) {
            max_power = nums[i];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (nums[i] > min_power && nums[i] < max_power) {
            ++cnt;
        }
    }
    std::cout << cnt;
    return 0;
}
