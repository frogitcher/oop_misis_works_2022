#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool cmp(int a, int b) {
    return b < a;
}

int main() {
    int n;
    std::cin >> n;
    double A, B;
    std::cin >> A >> B;
    double s1;
    std::cin >> s1;
    std::vector<int> array(n);
    double S = s1;
    for (int i = 1; i < n; i++) {
        std::cin >> array[i];
        S += array[i];
    }
    std::sort(array.begin(), array.end(), cmp);
    double R = s1 / S;
    double L = B / A;
    int ans = 0;
    if (R >= L) {
        std::cout << ans;
    }
    else {
        while (R < L) {
            S -= array[ans];
            R = s1 / S;
            ans++;
        }
        std::cout << ans;
    }
}