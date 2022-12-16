#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::string s;
    std::vector<std::string> arr;
    for (int i = 0; i < n; i++) {
        std::cin >> s;
        transform(s.begin(), s.end(), s.begin(), toupper);
        arr.push_back(s);
    }
    for (int i = 0; i < arr.size(); i++) {
        std:: cout << (arr[i] == "YES" ? "YES" : "NO") << std:: endl;
    }
}