//
// Created by Максим Афанасьев on 30.10.2022.
//

#include <iostream>
#include <map>
#include <iterator>
#include <vector>
#include <set>
#include <array>
#include <algorithm>


int main() {
    std::string n_;
    std::getline(std::cin, n_);
    int n = std::stoi(n_);
    for (int i =0; i < n; i++) {
        std::string line;
        std::getline(std::cin, line);
        if (line.length() == 3 && std::tolower(line[0]) == 'y' && std::tolower(line[1]) == 'e' && std::tolower(line[2]) == 's') {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
}
