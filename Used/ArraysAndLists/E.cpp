#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::string s;
    for (int i = 0; i < n; ++i) {
        std::cin >> s;
        for (int j = 0; j < 3; ++j) {
            s[j] = std::tolower(s[j]);
        }
        if (s == "yes") {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}