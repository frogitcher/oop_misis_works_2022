#include <iostream>
#include <iterator>
#include <set>


int main() {
    int str_len;
    std::cin >> str_len;
    std::string str;
    std::cin >> str;
    std::set<unsigned char> needs;
    for (unsigned char i = 'a'; i <= 'z'; i++) {
        needs.emplace(i);
    }
    for (int i = 0; i < str_len; i++) {
        char ch = std::tolower(str[i]);
        needs.erase(ch);
    }
    std::cout << (needs.empty() ? "YES" : "NO");
}
