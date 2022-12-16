#include <iostream>
#include <string>
#include <vector>

int main() {
    int n = 0;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::vector<int> rooms(10, 0);
    for (const char c: s) {
        if (c == 'L') {
            int i = 0;
            for (; rooms[i] == 1; ++i) {}
            rooms[i] = 1;
        }
        else {
            if (c == 'R') {
                int i = 9;
                for (; rooms[i] == 1; --i) {}
                rooms[i] = 1;
            } else {
                rooms[c - '0'] = 0;
            }
        }
    }
    for (const int c: rooms) {
        std::cout << c;
    }
}