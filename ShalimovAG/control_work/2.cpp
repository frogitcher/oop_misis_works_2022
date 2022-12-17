#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::pair<int, int> solve(std::vector<int> a) {
    int n = a.size();

    std::vector<std::pair<int, int>> res;
    for(int i = 0;i < n;i++)
        res.push_back({a[i], i});

    std::sort(res.begin(), res.end());

    int pos = -1;
    int best_diff = 1e9;

    for(int i = 1;i < n;i++) {
        if(res[i - 1].first > 0 && res[i].first - res[i - 1].first < best_diff) {
            pos = i;
        }
    }

    if(pos == -1) {
        return {-1, -1};
    }

    return {res[pos].second, res[pos - 1].second};
}

int main() {

    int n;
    std::cin >> n;

    std::vector<int> a(n);

    for(int& e : a)
        std::cin >> e;
    
    auto check = solve(a);
    std::cout << check.first << ' ' << check.second;

    return 0;
}