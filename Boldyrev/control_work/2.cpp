#include <iostream>
#include <vector>
#include <utility>

std::pair <int, int> FindMinSub(std::vector <int> const& a) {
    std::pair <int, int> ans = {-1, -1};
    int min = 1e9;
    for (int i = 0; i < a.size(); ++i) {
        for (int j = i + 1; j < a.size(); ++j) {
            if (a[i] > 0 && a[j] > 0 && abs(a[j] - a[i]) < min) {
                min = abs(a[j] - a[i]);
                ans.first = i;
                ans.second = j;
            }
        }
    }
    return ans;
}

int main() {
    std::vector <int> a = {-1, 309, 10, -10, -800, -30};
    std::pair <int, int> sus = FindMinSub(a);
    std::cout << "Answer (1, 2): " << sus.first << ' ' << sus.second << '\n';
}