#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    for (int test_number = 0; test_number < t; ++test_number) {
        int n, c;
        std::cin >> n >> c;
        std::vector <int> orbit(101, 0);
        for (int i = 0; i < n; ++i) {
            int orbnum;
            std::cin >> orbnum;
            orbit[orbnum] += 1;
        }
        int sum = 0;
        for (int i = 0; i < 101; ++i) {
            if (orbit[i] <= c) {
                sum += orbit[i];
            }
            else {
                sum += c;
            }
        }
        std::cout << sum << std::endl;
    }
}