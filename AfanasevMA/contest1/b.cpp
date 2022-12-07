#include <iostream>
#include <map>
#include <vector>
#include <set>


int main() {
    long int n = 0;
    std::cin >> n;
    std::vector<long int> v;
    for (long int i = 0; i < n; ++i) {
        long int t;
        std::cin >> t;
        v.push_back(t);
    }
    std::set<long int> visited;
    long int good = 0;
    for(long int i = n - 1; i >= 0; --i) {
        if (visited.count(v[i]) == 0) {
            visited.emplace(v[i]);
            good = v[i];
        }
    }
    std::cout << good;
    return 0;
}
