#include <iostream>
#include <vector>
#include <map>

int main() {
    int t;
    std::cin >> t;
    for (int number = 0; number < t; ++number) {
        int n, k;
        std::cin >> n >> k;
        std::map <int, int> entry_1{};
        std::map <int, int> entry_2{};
        for (int i = 0; i < n; ++i) {
            int station;
            std::cin >> station;
            if (entry_1.find(station) == entry_1.end()) {
                entry_1[station] = i;
                entry_2[station] = i;
            }
            else {
                entry_2[station] = i;
            }
        }
        for (int j = 0; j < k; ++j) {
            int a, b;
            std::cin >> a >> b;
            if (entry_1.find(a) == entry_1.end() || entry_1.find(b) == entry_1.end()) {
                std::cout << "NO" << '\n';
            }
            else {
                if (entry_1[a] < entry_2[b]) {
                    std::cout << "YES" << '\n';
                }
                else {
                    std::cout << "NO" << '\n';
                }
            }
        }
    }
}