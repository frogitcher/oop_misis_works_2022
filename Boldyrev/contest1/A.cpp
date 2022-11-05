#include <iostream>
#include <vector>

int main()
{   
    int min = 1000000000;
    int max = -1;
    int countnon = 0;
    int n;
    std::cin >> n;
    std::vector <int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] == min || a[i] == max) countnon += 1;
    }
    std::cout << n - countnon;
}