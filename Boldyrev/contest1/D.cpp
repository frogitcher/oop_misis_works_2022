#include <iostream>
#include <algorithm>
#include <vector>

int main()
{   
    int n, A, B, S = 0;
    std::cin >> n >> A >> B;
    std::vector<int> sizes(n);
    for (int i = 0; i < n; ++i) {
        int size; 
        std::cin >> size;
        S += size;
        sizes[i] = size;
    }
    std::sort(sizes.begin() + 1, sizes.end());
    int ans = 0;
    for (int i = 1; S > (double)(sizes[0] * A) / B; ++i) {
        S -= sizes[n - i];
        ans += 1;
    }
    std::cout << ans;
}