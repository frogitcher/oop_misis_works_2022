#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> a(n), time(2e5 + 1);
    int timer = 0;
    for(int& e : a) {
        std::cin >> e;
        time[e] = timer++;
    }
    
    int answer = a[0];
    for(int i = 1;i < n;i++) {
        if(time[a[i]] < time[answer]) {
            answer = a[i];
        }
    }

    std::cout << answer;

    return 0;
}