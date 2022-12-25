#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    int A, B;
    std::cin >> A >> B;

    std::vector<int> s(n);
    int S = 0;
    for(int& e : s) {
        std::cin >> e;
        S += e;
    }

    std::sort(std::next(s.begin()), s.end());

    for(int i = n - 1;i >= 0;i--) {
        if(S == 0 || s[0] * A / S >= B) {
            std::cout << n - i - 1;
            break;
        }
        S -= s[i];
    }

    return 0;
}