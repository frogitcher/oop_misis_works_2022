#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::vector<int> array(26);
    for (char c : s) {
        array[std::tolower(c) - 'a']++;
    }
    int count = 0;
    for (int i : array) {
        if (i > 0) {
            count++;
        }
    }
    if (count == 26) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
}