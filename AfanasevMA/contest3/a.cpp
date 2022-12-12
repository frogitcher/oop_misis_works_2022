#include <iostream>
#include <cmath>
#include <fstream>

double CalculatePi(int n) {
    // see https://en.wikipedia.org/wiki/Leibniz_formula_for_%CF%80
    double res = 0;
    int den = 1;
    double num = 1.0;
    for (int i = 0; i < n; i++) {
        res += num / den;
        num *= -1;
        den += 2;
    }
    return 4 * res;
}

double CalculateAtan(int n, double x) {
    // see https://en.wikipedia.org/wiki/Taylor_series#Trigonometric_functions
    double res = 0;
    double num = x;
    int den = 1;
    for (int i = 0; i < n; i++) {
        double to_add = num / den;
        if (i % 2 == 1) {
            to_add *= -1;
        }
        res += to_add;
        num *= x * x;
        den += 2;
    }
    return res;
}

double CalculateAtan2(int n, double pi, double y, double x) {
    if (x == 0) {
        return pi / 2;
    }
    else {
        double yx = y / x;
        // pi / 2 = atan(1/x) + atan(x)
        if (std::abs(yx) > 1) {
            return pi / 2 - CalculateAtan(n, 1 / yx);
        }
        else {
            return CalculateAtan(n, yx);
        }
    }
}


int main() {
    std::ifstream cin("angle1.in");
    std::ofstream cout("angle1.out");
    cout.precision(10);  // вот бы ещё в условии до какого знака после запятой резать писалось...
    double pi = CalculatePi(1000000);
    double x, y;
    cin >> x >> y;

    double o = CalculateAtan2(1000000, pi, y, x);
    if (o < 0) {
        o += 2 * pi;
    }
    cout << o;
}