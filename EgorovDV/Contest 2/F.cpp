#include <iostream>
#include <vector>
#include <set>

int main() {
    int t = 0;
    std::cin >> t;
    while(t) {
        int n = 0;
        std::cin >> n;
        std::vector<int> first(n);
        for (int i = 0; i < n; i++) {
            int x = 0;
            std::cin >> x;
            first[i] = x;
        }
        std::set<int> second;

        for (int i = n - 1; i >= 0; i--) {
            if (second.count(first[i]) == 0)
                second.insert(first[i]);
            else {
                std::cout << i + 1 << std::endl;
                break;
            }
        }
        if (second.size() == n)
            std::cout << 0 << std::endl;
        t--;
    }
}