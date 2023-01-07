#include <queue>
#include <iostream>
#include <array>
#include <set>

int main() {
    int n_snacks;
    std::cin >> n_snacks;
    std::set<int> cached_snacks;
    int need_place_next = n_snacks;
    for (int i = 0; i < n_snacks; i++) {
        int curr_snack;
        std::cin >> curr_snack;
        cached_snacks.emplace(curr_snack);
        while (cached_snacks.count(need_place_next) != 0) {
            std::cout << need_place_next << ' ';
            need_place_next--;
        }
        std::cout << std::endl;
    }
}