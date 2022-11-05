#include <iostream>
#include <vector>

int main()
{   
    int n;
    std::vector <int> a(200001, -1);
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int number;
        std::cin >> number;
        a[number] = i;
    }
    int min = 1000000;
    int ans;
    for (int i = 0; i < 200001; ++i) {
        if (a[i] != -1 && a[i] < min) {min = a[i]; ans = i;}
    }
    std::cout << ans;
}