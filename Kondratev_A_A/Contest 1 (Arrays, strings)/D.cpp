#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    int n = 0, A = 0, B = 0;
    std::cin >> n >> A >> B;
    std::vector<int> x(n - 1);
    int first = 0;
    std::cin >> first;
    long long sum = first;
    for (int &x0: x) {
        std::cin >> x0;
        sum += x0;
    }
    int S = first * A / B;
    if (S >= sum) {
        std::cout << 0;
    } else {
        std::sort(x.begin(), x.end(), std::greater<>());
        int res = 0;
        for (const int x0: x) {
            sum -= x0;
            res += 1;
            if (S >= sum) {
                std::cout << res;
                break;
            }
        }
    }
}