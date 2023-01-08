#include <iostream>
#include <map>

int main() {
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int cnt = 0;
        int n = 0, c = 0;
        std::cin >> n >> c;
        std::map<int, int> m;
        for (int j = 0; j < n; ++j) {
            int a = 0;
            std::cin >> a;
            m[a] += 1;
        }
        for (int k = 0; k < m.size(); ++k) {
            if (m[k] >= c) {
                cnt += c;
            }
            else if (0 < m[k] && m[k] < c) {
                cnt += m[k];
            }
        }
        std::cout << cnt << "\n";
    }
    return 0;
}