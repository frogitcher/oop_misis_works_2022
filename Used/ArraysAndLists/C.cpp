#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> arr(n, std::vector<int>(4));
    int mx = 0;
    int place = 1;
    int sum_john = 0;

    for (int j = 0; j < 4; ++j) {
        std::cin >> arr[0][j];
        sum_john += arr[0][j];
    }
    for (int i = 1; i < n; ++i) {
        int sm = 0;
        for (int j = 0; j < 4; ++j) {
            std::cin >> arr[i][j];
            sm += arr[i][j];
        }
        if (sm > sum_john) {
            place++;
        }
    }
    std::cout << place;
    return 0;
}