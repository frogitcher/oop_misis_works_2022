#include <iostream>
#include <map>
#include <vector>
#include <array>


int main() {
    int n, a, b;
    std::cin >> n >> a >> b;
    long int start;
    std::cin >> start;
    std::vector<long int> holes;
    long int sum = start;
    for (int i = 0; i < n - 1; ++i) {
        int t;
        std::cin >> t;
        holes.push_back(t);
        sum += t;
    }

    std::sort(holes.begin(), holes.end(), std::greater<>());
    for (int i = -1; i < n - 1; ++i) {
        if (i != -1) {
            sum -= holes[i];
        }
        double spills = double(start) * a / double(sum);
        if (spills >= b) {
            std::cout << i + 1;
            return 0;
        }
    }
}
