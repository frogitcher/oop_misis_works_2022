#include <iostream>
#include <vector>
int main() {
    int n;
    int min1 = 10000000;
    std::cin >> n;
    std::vector<int> powers(n);
    for (int& element : powers) {
        std::cin >> element;
    }
    int index1, index2;
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            if (std::abs(powers[i] - powers[j]) < min1 && powers[i] > 0 && powers[j] > 0) {
                min1 = std::min(min1, std::abs(powers[i] - powers[j]));
                index1 = i;
                index2 = j;
            }
        }
    }
    std::cout << (min1 == 0 ? (-1, -1) : index1 << index2);
}