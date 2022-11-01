//
// Created by Максим Афанасьев on 30.10.2022.
//

#include <iostream>
#include <iterator>
#include <set>


int main() {
    int l;
    std::cin >> l;
    std::string ll;
    std::cin >> ll;
    std::set<unsigned char> needs;
    for (unsigned char i = 'a'; i <= 'z'; i++) {
        needs.emplace(i);
    }
    for (int i = 0; i < l; i++) {
        unsigned char ch = std::tolower(ll[i]);
        needs.erase(ch);
    }
    if (needs.empty()) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}
