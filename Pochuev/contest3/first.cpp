#include<fstream>
#include<cmath>
#include<iostream>
#include<iomanip>

double get_atan(double, double);

double PI = 3.141592653589793238462;

int main() {
    std::ifstream in("angle1.in");
    double x, y;
    in >> x >> y;

    std::ofstream out("angle1.out");
    out.fixed;
    out.precision(10);

    double ans = get_atan(y, x);
    ans = (ans < 0.0) ? ans + 2 * PI : ans;

    out << ans;

    in.close();
    out.close();

    return 0;
}


double get_atan(double y, double x) {
    if (x == 0) {
        return y > 0 ? PI / 2 : 3 * PI / 2;
    }

    double alpha = std::abs(y / x) >= 1 ? x / y : y / x;
    int exp = 1000000;
    long count = 0;
    double res = 0;

    for (long i = 1; i <= exp; i += 2) {
        if (count % 2 == 0) {
            res += std::pow(alpha, i) / i;
        }
        else {
            res -= std::pow(alpha, i) / i;
        }
        count++;
    }
    if (std::abs(y / x) > 1) {
        res = PI / 2 - res;
        if (x > 0) {
            return res;
        }
        return y >= 0 ? PI + res : res - PI;
    }
    else {
        if (x > 0) {
            return res;
        }
        return y >= 0 ? PI + res : res - PI;
    }
}



