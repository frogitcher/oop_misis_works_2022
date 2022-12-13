#include <iostream>
#include <vector>

int main() {   
    int n, k;
    std::cin >> n >> k;
    std::vector <int> q(500000);
    for (int i = 0; i < n; ++i) {
        std::cin >> q[i];
    }
    if (k >= n) {
        std::cout << n;
    }
    else {
        bool win = false;
        std::vector <int> res(n + 1, 0);
        int start = 0;
        int end = n;
        while (!win) {
            if (q[start] > q[start + 1]) {
                q[end] = q[start + 1];
                q[start + 1] = q[start];
                start += 1;
                end += 1;
                res[q[start]] += 1;
            }
            else {
                q[end] = q[start];
                start += 1;
                end += 1;
                res[q[start]] += 1;
            }
            if (res[q[start]] == k) {
                win = true;
                std::cout << q[start];
            }
        }
    }
}