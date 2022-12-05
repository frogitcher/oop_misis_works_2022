#include <iostream>
#include <set>
#include <vector>
#include <iterator>

int main() {
    int number = 0;
    std::cin >> number;
    std::vector<int> canteens(number);
    for (int &canteen: canteens) {
        std::cin >> canteen;
    }
    std::reverse(canteens.begin(), canteens.end());
    std::set<int> used;
    int last_elem = 0;
    for (int &canteen: canteens) {
        if (!used.count(canteen)) {
            last_elem = canteen;
        }
        used.insert(canteen);
    }
    std::cout << last_elem;
}