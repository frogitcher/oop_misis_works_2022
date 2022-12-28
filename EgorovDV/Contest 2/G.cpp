#include <iostream>
#include <map>


int main() {
    int t = 0;
    std::cin >> t;
    while(t) {
        int n = 0;
        std::cin >> n;
        int k = 0;
        std::cin >> k;
        std::map<int, int> max;
        std::map<int, int> min;
        for (int i = 0; i < n; i += 1) {
            int x = 0;
            std::cin >> x;
            if (min[x] == 0)
                min[x] = i+1;
            max[x] = i+1;
        }
        for (int i = 0; i < k; i += 1) {
            int x = 0;
            std::cin >> x;
            int y = 0;
            std::cin >> y;
            if ((min[x] < max[y]) && min[x] != 0 && max[y] != 0) {
            std::cout << "YES" << std::endl;
        }
        else {
        std::cout << "NO" << std::endl;
        }
        }
        t--;
    }
}