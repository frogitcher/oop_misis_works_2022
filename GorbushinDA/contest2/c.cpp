#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>


int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;
        std::set<std::pair<int, int> > v;
        int a = 0, b = 0, answer = 0;
        for (char x : s) {
            int c = a, d = b;
            if (x == 'N') {
                a++;
            }
            else if (x == 'S') {
                a--;
            }
            else if (x == 'W') {
                b--;
            }
            else {
                b++;
            }
            if (v.count({ c + a, d + b }) == 0) {
                answer += 5, v.insert({ c + a, d + b });
            }
            else {
                answer += 1;
            }
        }
        std::cout << answer << std::endl;
    }
}