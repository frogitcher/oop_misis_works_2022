#include <iostream>
#include <cmath>
#include <fstream>
int main() {
    std::ifstream cin("angle1.in");
    std::ofstream cout("angle1.out");

    cout.precision(10);

    const double pi = std::acos(-1.0);

    double x, y;
    cin >> x >> y;

    double result = std::atan2(y, x);
    if (result < 0) {
        result += 2 * pi;
    }
    cout << result;
    return 0;
}