#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    std::vector <int> ans{};
    for (int test_number = 0; test_number < t; ++test_number) {
        int x = 0;
        int y = 0;
        int length = 0;
        std::set <std::pair <std::pair <int, int>, std::pair <int, int>>> segments;
        std::string way;
        std::cin >> way;
        for (int i = 0; i < way.size(); ++i) {
            int newx, newy;
            std::pair <int, int> fpoint, spoint;
            switch (way[i]) {
                case 'N':
                    newx = x;
                    newy = y + 1;
                    break;
                case 'W':
                    newx = x + 1;
                    newy = y;
                    break;
                case 'S':
                    newx = x;
                    newy = y - 1;
                    break;
                case 'E':
                    newx = x - 1;
                    newy = y;
                    break;
            }
            if (way[i] == 'N' || way[i] == 'W') {
                fpoint = std::make_pair(x, y);
                spoint = std::make_pair(newx, newy); 
            }
            else {
                fpoint = std::make_pair(newx, newy);
                spoint = std::make_pair(x, y);
            }
            std::pair <std::pair <int, int>, std::pair <int, int>> segment = make_pair(fpoint, spoint);
            if (segments.find(segment) == segments.end()) {
                length += 5;
                segments.insert(segment);
            }
            else {
                length += 1;
            }
            x = newx;
            y = newy;
        }
        ans.push_back(length);
    }
    for (int i = 0; i < ans.size(); ++i) {
        std::cout << ans[i] << '\n';
    }
}