#include <iostream>
#include <map>

void roads() {
    int n;
    int k;
    std::cin >> n >> k;


    std::map<int, std::pair<int, int>> list;
    for (int i = 0; i < n; ++i) {
        int key;
        std::cin >> key;
        if (list.find(key) == list.end()) {
            list.insert(std::make_pair(key, std::pair(i, i)));
        }
        else {
            std::pair<int, int> p = list[key];
            list[key] = std::pair(p.first, i);
        }
    }

    for (int i = 0; i < k; ++i) {
        int a, b;
        std::cin >> a >> b;
        if (list.find(a) == list.end() || list.find(b) == list.end()) {
            std::cout << "NO" << std::endl;
        }
        else {
            std::pair<int, int> f = list.at(a);
            std::pair<int, int> s = list.at(b);
            if (f.first < s.second) {
                std::cout << "YES" << std::endl;
            }
            else {
                std::cout << "NO" << std::endl;
            }
        }
    }
}

int main() {

    int t;
    std::cin >> t;
    for (int p = 0; p < t; ++p) {
        roads();
    }
}