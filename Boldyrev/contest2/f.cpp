#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    for (int test_number = 0; test_number < t; ++test_number) {
        int n;
        std::cin >> n;
        std::vector <int> set(n + 1, 0);
        std::vector <int> seq(n);
        bool isright = true;
        for (int i = 0; i < n; ++i) {
            std::cin >> seq[i];
        }
        for (int i = n - 1; i > -1; --i) {
            if (set[seq[i]] == 0) {
                set[seq[i]] += 1;
            }
            else {
                std::cout << i + 1 << '\n';
                isright = false;
                break;
            }
        }
        if (isright) {
            std::cout << 0 << '\n';
        }
    }
}
