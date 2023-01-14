#include <iostream>
#include <set>

void round(int k, std::set<int>& snacks) {
    if (k == 0)
        return;
    if (snacks.find(k) == snacks.end()) {
        std::cout << std::endl;
        int c;
        std::cin >> c;
        if (c == k) {
            std::cout << c << " ";
            round(c - 1, snacks);
        }
        else {
            snacks.insert(c);
            round(k, snacks);
        }

    }
    else {
        std::cout << k << " ";
        round(k - 1, snacks);
    }
}

int main() {
    int n;
    std::cin >> n;
    if (n != 1) {
        int p;
        std::cin >> p;
        std::set<int> snacks;
        snacks.insert(p);
        round(n, snacks);
    }
    else {
        int p;
        std::cin >> p;
        std::cout << p;
    }
}