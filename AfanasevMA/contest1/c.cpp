#include <iostream>


int main() {
    long int n;
    std::cin >> n;
    long int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    long int sum = a + b + c + d;
    long int out = 1;
    for (int i = 2; i <= n; i++) {
        std::cin >> a >> b >> c >> d;
        if (a + b + c + d > sum) {
            out++;
        }
    }
    std::cout << out;
    return 0;
}
