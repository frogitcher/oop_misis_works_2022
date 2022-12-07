#include <queue>
#include <iostream>

int main() {
    long int n;
    long long int k;
    std::cin >> n >> k;
    if (k >= n - 1) {
        k = n - 1;
    }

    std::deque<std::pair<long int, long int>> players;
    std::vector<long int> wins;
    for (long int i = 0; i < n; i++) {
        long int t;
        std::cin >> t;
        players.emplace_back(std::pair(i, t));
        wins.emplace_back(0);
    }

    bool somebody_won = false;
    while (!somebody_won) {
        auto p1 = players.front();
        players.pop_front();
        auto p2 = players.front();
        players.pop_front();
        std::pair<long int, long int> better, worse;
        if (p1.second > p2.second) {
            better = p1;
            worse = p2;
        }
        else {
            better = p2;
            worse = p1;
        }
        wins[better.first] += 1;
        players.emplace_front(better);
        players.emplace_back(worse);
        if (wins[better.first] >= k) {
            somebody_won = true;
            std::cout << better.second;
        }
    }
}