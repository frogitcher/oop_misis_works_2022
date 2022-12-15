#include <iostream>
#include <iterator>

int main() {
    std::string n_;
    std::getline(std::cin, n_);
    int n = std::stoi(n_);
    for (int i =0; i < n; i++) {
        std::string line;
        std::cin >> line;
        std::transform(line.begin(), line.end(), line.begin(), ::tolower);
        if (line == "yes") {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
}
