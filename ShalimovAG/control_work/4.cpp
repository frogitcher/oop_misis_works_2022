#include <iostream>
#include <cmath>

double PI = acos(-1.0);
double arg_test[14] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, PI, 2 * PI * PI, 4.65, -121.0, -443.0, -PI, -1000000.0};

double mySin(double x) {
    int cnt = (int)(x / (2 * PI));
    double prev_x = x;
    x -= cnt * 2 * PI;
    double res = 0;
    int one = 1;
    double curr = x;

    for(int k = 0;k < 15;k++) {
        res += one * curr;
        curr *= x;
        curr *= x;
        curr /= (double)(2 * k + 2);
        curr /= (double)(2 * k + 3);
        one *= -1;
    }

    std::cout << "sin(" << x << ") = " << res << " ? " << sin(prev_x) << std::endl;
    return res;
}

int main() {

    for(double x : arg_test) {
        std::cout << (sin(x) - mySin(x) < 1e-6) << std::endl;
    }

    return 0;
}