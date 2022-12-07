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
        if (curr_snack == need_place_next) {
            std::cout << curr_snack << ' ';
            need_place_next--;
            while (true) {
                if (cached_snacks.empty())
                    break;
                int snack = *cached_snacks.rbegin();
                if (snack != need_place_next) {
                    break;
                }
                need_place_next--;
                cached_snacks.erase(snack);
                std::cout << snack << ' ';
            }
        }
        else {
            cached_snacks.emplace(curr_snack);
        }
        std::cout << std::endl;
    }
}