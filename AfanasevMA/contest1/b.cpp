//
// Created by Максим Афанасьев on 30.10.2022.
//

#include <iostream>
#include <map>
#include <iterator>
#include <vector>
#include <set>


int main() {
    long int n = 0;
    std::cin >> n;
    std::vector<long int> v;
    long int max_stl = 0;
    for (long int i = 0; i < n; ++i) {
        long int t;
        std::cin >> t;
        v.push_back(t);
        if (t > max_stl) {
            max_stl = t;
        }
    }
    std::set<long int> visited;
    long int good = 0;
    for(long int i = n - 1; i >= 0; --i) {
        if (visited.find(v[i]) == visited.end()) {
            visited.emplace(v[i]);
            good = v[i];
        }
    }
    std::cout << good;
    return 0;
}
