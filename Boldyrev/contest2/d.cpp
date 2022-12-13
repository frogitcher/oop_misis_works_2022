#include <iostream>
#include <set>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector <int> snacks(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> snacks[i];
    }
    int cur = n;
    std::set <int> inuse;
    for (int i = 0; i < n; ++i) {
        inuse.insert(snacks[i]);
        while (inuse.find(cur) != inuse.end()) {
            std::cout << cur << " ";
            cur -= 1;
        }
        std::cout << '\n';
    }
}