#include <iostream>
#include <string>
#include <map>
#include <vector>


int main() {
    int n = 0;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    if (n % 4 != 0) {
        std::cout << "===";
        return 0;
    }
    std::map<char, int> counter{{'A', 0},
                                {'C', 0},
                                {'G', 0},
                                {'T', 0}};
    std::vector<int> q;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '?') {
            q.push_back(i);
        } else {
            ++counter[s[i]];
        }
    }
    int index = 0;
    for (auto &pair: counter) {
        while (pair.second < n / 4) {
            if (q.empty()) {
                std::cout << "===";
                return 0;
            }
            index = q.back();
            q.pop_back();
            ++pair.second;
            s[index] = pair.first;
        }
    }
    if (q.empty()) {
        for (const char c: s) { std::cout << c; };
    } else {
        std::cout << "===";
    }
}