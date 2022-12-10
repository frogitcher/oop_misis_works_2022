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
    double s_1;
    std::cin >> s_1;
    std::vector<int> arr(n);
    double S = s_1;
    for (int i = 1; i < n; ++i) {
        std::cin >> arr[i];
        S += arr[i];
    }
    std::sort(arr.begin(), arr.end(), cmp);
    double R = s_1 / S;
    double L = B / A;
    int ans = 0;
    if (R >= L) {
        std::cout << ans;
    }
    else {
        while (R < L) {
            S -= arr[ans];
            R = s_1 / S;
            ans++;
        }
        std::cout << ans;
    }

    return 0;
}