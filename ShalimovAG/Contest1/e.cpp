#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int tt;
    std::cin >> tt;

    std::vector<std::string> answer = {"NO", "YES"};

    while(tt-- > 0) {
        std::string s;
        std::cin >> s;

        bool isGood = std::tolower(s[0]) == 'y' && std::tolower(s[1]) == 'e' && std::tolower(s[2]) == 's';
        std::cout << answer[isGood] << '\n';
    }

    return 0;
}