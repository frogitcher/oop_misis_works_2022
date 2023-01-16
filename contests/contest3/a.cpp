#include <fstream>
#include <iomanip>
#include <cmath>

const double pi = 3.141592653589793238463;
const int TEYLOR_PRECISION = 1000000;

double arctg(double const x) {
    double result = 0;
    for (int n = 0; n < TEYLOR_PRECISION; ++n) {
        result += std::pow(-1, n) * std::pow(x, 2 * n + 1) / (2 * n + 1);
    }
    return result;
}

double arctg2(double const x, double const y) {
    if (x == 0) {
        if (y > 0) {
            return pi / 2;
        }
        else {
            return 3 * pi / 2;
        }
    }
    if (y == 0) {
        if (x > 0) {
            return 0;
        }
        else {
            return pi;
        }
    }
    double tg = std::abs(y / x);
    double alpha;
    if (tg > 1) {
        alpha = pi / 2 - arctg(1 / tg);
    }
    else {
        alpha = arctg(tg);
    }
    if (x > 0 && y > 0) {
        return alpha;
    }
    else if (x < 0 && y > 0) {
        return pi - alpha;
    }
    else if (x < 0 && y < 0) {
        return pi + alpha;
    }
    else {
        return 2 * pi - alpha;
    }
}

int main() {
    std::ifstream fin("angle1.in");
    std::ofstream fout("angle1.out");
    fout << std::fixed << std::setprecision(10);
    double x, y;
    fin >> x >> y;
    fout << arctg2(x, y);
}