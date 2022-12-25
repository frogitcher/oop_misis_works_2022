#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> grades(n);

    for(int i = 0;i < n;i++) {
        for(int j = 0;j < 4;j++) { 
            int x;
            std::cin >> x; 
            grades[i] += x;
        }
    }

    int answer = 0;
    for(int i = 1;i < n;i++) {
        answer += grades[i] <= grades[0];
    }
    std::cout << n - answer;
}