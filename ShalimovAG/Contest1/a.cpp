#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    int mx = -1e9;
    int mn = 1e9;
    for(int& e : a) {
        std::cin >> e;
        mn = std::min(mn, e);
        mx = std::max(mx, e);
    }

    int answer = 0;
    for(int e : a) {
        answer += e != mn && e != mx;
    }

    std::cout << answer << '\n';

    return 0;
}