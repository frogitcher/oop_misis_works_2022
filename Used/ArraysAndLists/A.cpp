#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int& element : arr) {
        std::cin >> element;
    }
    int mn = *std::min_element(arr.begin(), arr.end());
    int mx = *std::max_element(arr.begin(), arr.end());

    int cnt = 0;
    for (int& element : arr) {
        if (mn < element && element < mx) {
            ++cnt;
        }
    }
    
    std::cout << cnt;

    return 0;
}