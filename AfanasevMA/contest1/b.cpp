#include <iostream>
#include <map>
#include <vector>
#include <algorithm>


int main() {
    long int n = 0;
    std::cin >> n;
    std::map<long int, long int> last_visited_i;
    for (long int i = 0; i < n; ++i) {
        long int t;
        std::cin >> t;
        last_visited_i[t] = i;
    }
    auto good = std::min_element(last_visited_i.begin(), last_visited_i.end(), [](auto &lhs, auto &rhs) {
        return lhs.second < rhs.second;
    });
    std::cout << (good->first);
    return 0;
}
