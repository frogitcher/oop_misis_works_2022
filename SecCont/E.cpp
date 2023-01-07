#include <iostream>
#include <set>
#include <vector>

void mission() {
    int n;
    int c;
    std::cin >> n >> c;
    std::vector<int> arr(0);
    arr.resize(100);
    for (int i = 0; i < n; ++i) {
        int planet;
        std::cin >> planet;
        arr[planet - 1]++;
    }
    int s = 0;
    for (int i : arr) {
        if (i > c) {
            s += c;
        }
        else {
            s += i;
        }
    }
    std::cout << s << std::endl;
}

int main() {

    int t;
    std::cin >> t;
    for (int j = 0; j < t; ++j) {
        mission();
    }

}