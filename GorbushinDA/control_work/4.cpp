#include <iostream>
#include <cmath>
int main() {
    std::cout.precision(10);
    //const double PI = acos(-1.0);
    double x;
    std::cin >> x;
    //std::cout << sqrt(3) / 2;
    double sin1 = x - pow(x, 3) / 6 + pow(x, 5) / 120 - pow(x, 7) / 5040 + pow(x, 9) / 362880 - pow(x, 11) / 39916800;
    std::cout << sin(x) << std::endl;
    std::cout << sin1;
}