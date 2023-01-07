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
    long int cnt = std::count_if(nums.begin(), nums.end(), [min_power, max_power](long int n) { return n > min_power && n < max_power; });
    std::cout << cnt;
    return 0;
}
