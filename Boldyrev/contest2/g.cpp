#include <iostream>
#include <vector>
#include <map>

int main() {
    int t;
    std::cin >> t;
    for (int test_number = 0; test_number < t; ++test_number) {
        int n, k;
        std::cin >> n >> k;
        std::map <int, int> firstentry{};
        std::map <int, int> lastentry{};
        for (int i = 0; i < n; ++i) {
            int station;
            std::cin >> station;
            if (firstentry.find(station) == firstentry.end()) {
                firstentry[station] = i;
                lastentry[station] = i;
            }
            else {
                lastentry[station] = i;
            }
        }
        for (int j = 0; j < k; ++j) {
            int a, b;
            std::cin >> a >> b;
            if (firstentry.find(a) == firstentry.end() || firstentry.find(b) == firstentry.end()) {
                std::cout << "NO" << '\n';
            }
            else {
                if (firstentry[a] < lastentry[b]) {
                    std::cout << "YES" << '\n';
                }
                else {
                    std::cout << "NO" << '\n';
                }
            }
        }
    }
}