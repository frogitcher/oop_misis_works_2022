#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    int countDiff = 0;
    for(char i = 'a';i <= 'z';i++) {
        bool isContain = std::count(s.begin(), s.end(), i) + std::count(s.begin(), s.end(), toupper(i)) != 0;
        countDiff += isContain;
    }

    if(countDiff == 26) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}