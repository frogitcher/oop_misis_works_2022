#include <iostream>
#include <map>

int main() {
    int t = 0;
    std::cin >> t;

    while(t) {
        int cost = 0;
        int n = 0;
        std::cin >> n;
        int c = 0;
        std::cin>> c;
        std::map<int, int> orbits;
        for (int i = 0; i < n; i++) {
            int planet = 0;
            std::cin >> planet;
            if (orbits.count(planet) == 0)
                orbits[planet] = 0;
            orbits[planet] += 1;
        }
        for (auto& elem : orbits) {
            if (elem.second >= c)
                cost += c;
            else 
                cost += elem.second;
        }
        std::cout << cost << std::endl;
        t--;
    }
}