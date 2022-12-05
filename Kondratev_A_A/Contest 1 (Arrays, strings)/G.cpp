#include <iostream>
#include <string>
#include <set>


int main() {
    int n = 0;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::set<int> tmp;
    for (const char c: s) {
        tmp.insert(std::tolower(c));
    }
    std::cout << (tmp.size() == 26 ? "YES" : "NO");
}