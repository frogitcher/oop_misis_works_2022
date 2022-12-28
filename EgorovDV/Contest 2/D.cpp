#include <iostream>
#include <set>

int main() {
    int n;
    std::cin >> n;
    int temp = n;
    std::set <int> snacks;
    while(snacks.size() != n) {
        int x;
        std::cin >> x;
        snacks.insert(x);
        while (snacks.count(temp)) {
            std::cout << temp << " ";
            temp--;
        }
        std::cout << std::endl;
    }
}