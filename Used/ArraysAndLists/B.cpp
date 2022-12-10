#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n + 1);
    std::vector<int> nums(200001);
    int mn;
    int mx = 0;
    for (int i = 1; i < n + 1; i++) {
        std::cin >> arr[i];
        nums[arr[i]] = i;
        mx = std::max(mx, arr[i]);
    }
    mn = 1000000;
    int mnc = 0;
    for (int i = 0; i < mx + 1; i++) {
        if (nums[i] > 0 && nums[i] < mn) {
            mn = nums[i];
            mnc = i;
        }
    }

    std::cout << mnc;

    return 0;
}