#include <iostream>
#include <cmath>

double fact[32];

double PI = acos(-1.0);
double arg[10] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, PI, 2 * PI, 4.65};

double mySin(double x, int cnt) {
    double res = 0;
    int one = 1;
    double curr = x;
    for(int k = 0;k < cnt;k++) {
        res += one * curr;
        curr *= x;
        curr *= x;
        curr /= (double)(2 * k + 2);
        curr /= (double)(2 * k + 3);
        one *= -1;
    }
    //std::cout << "sin(" << x << ") = " << res << " ? " << sin(x) << std::endl;
    return res;
}

bool isGood(int cnt) {
    bool ok = true;
    for(double x : arg)
        ok &= abs(sin(x) - mySin(x, cnt)) < 0.000001;
    std::cout << ok << std::endl;
    return ok;
}

int main() {

    for(int i = 1;i < 15;i++) {
        if(isGood(i)) { std::cout << i << std::endl; }
    }

    return 0;
}