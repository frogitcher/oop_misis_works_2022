#include <iostream>
#include <vector>


int main() {
    long int n = 0;
    std::cin >> n;
    std::vector<long int> nums;
    for (int i = 0; i < n; ++i) {
        long int num;
        std::cin >> num;
        nums.push_back(num);
    }
    long int min_power = *std::min_element(nums.begin(), nums.end());
    long int max_power = *std::max_element(nums.begin(), nums.end());
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (nums[i] > min_power && nums[i] < max_power) {
            ++cnt;
        }
    }
    std::cout << cnt;
    return 0;
}
