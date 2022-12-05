#include <iostream>
#include <vector>

int main() {
    int number = 0;
    std::cin >> number;
    std::vector<long long> stewards(number);
    for (long long &steward: stewards) {
        std::cin >> steward;
    }
    long long min_elem = stewards[0];
    long long max_elem = stewards[0];
    int count_min = 0, count_max = 0;
    for (long long &steward: stewards) {
        if (min_elem > steward) {
            min_elem = steward;
            count_min = 1;
        } else if (min_elem == steward) {
            count_min += 1;
        }
        if (max_elem < steward) {
            max_elem = steward;
            count_max = 1;
        } else if (max_elem == steward) {
            count_max += 1;
        }
    }
    std::cout << std::max(0, number - (count_min + count_max));
}