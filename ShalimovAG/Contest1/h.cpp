#include <iostream>
#include <vector>
#include <algorithm>
#include <set>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    std::vector<bool> free(10, true);    

    for(int i = 0;i < n;i++) {
        if(s[i] == 'L') {
            int pos = std::find(free.begin(), free.end(), true) - free.begin();
            free[pos] = false;
        }
        if(s[i] == 'R') {
            int pos = 9 - (std::find(free.rbegin(), free.rend(), true) - free.rbegin());
            free[pos] = false;
        }
        if(s[i] >= '0' && s[i] <= '9') {
            free[s[i] - '0'] = true;
        }
    }
    for(bool e : free)
        std::cout << !e;

    return 0;
}