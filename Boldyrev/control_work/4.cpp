#include <iostream>
#include <iomanip>
#include <cmath>

double const PI = acos(-1.0);
int const TEYLOR_PRECISON = 10;

long long factorial(int n) {
    long long res = 1;
    for (; n > 1; --n) {
        res *= n;
    }
    return res;
}

double normalise(double x){
    while (x < -PI) {
        x += 2 * PI;
    }
    while (x > PI) {
        x -= 2 * PI;
    }
    return x;
}

double sinus(double x) {
    x = normalise(x);
    double res = 0;
    for (int k = 0; k < TEYLOR_PRECISON; ++k) {
        res += ((k % 2 == 0) ? 1 : -1) * std::pow(x, 2 * k + 1) / factorial(2 * k + 1);
    }
    return res;
}

int main() {
    std::cout << std::fixed << std::setprecision(6);
    for (double x = -5.0; x < 5.1; x += 0.1) {
        std::cout << "X = " << x << ": cmath_sinus = " << std::sin(x) << ", teylor_sinus = " << sinus(x) << '\n';
    }
    for (int x = -1000; x < 1000; ++x) {
        if (abs(std::sin(x) - sinus(x)) > 1e6) {
            std::cout << "Ahtung! Wrong answer on X = " << x << '\n';
        }
    }
}