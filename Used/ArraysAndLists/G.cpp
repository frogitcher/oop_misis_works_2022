#include <iostream>
#include <vector>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::vector<int> arr(26);
    for (char c : s) {
        ++arr[std::tolower(c) - 'a'];
    }
    int cnt = 0;
    for (int i : arr) {
        if (i > 0) {
            ++cnt;
        }
    }
    if (cnt == 26) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
    return 0;
}