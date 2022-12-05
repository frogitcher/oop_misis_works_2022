#include <iostream>
#include <string>
#include <algorithm>


int main() {
    int t = 0;
    std::cin >> t;
    std::string s;
    for (int _ = 0; _ < t; ++_) {
        std::cin >> s;
        std::transform(s.begin(), s.end(), s.begin(), toupper);
        std::cout << (s == "YES" ? "YES" : "NO") << std::endl;
    }
}