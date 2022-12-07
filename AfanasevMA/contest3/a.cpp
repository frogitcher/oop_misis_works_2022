#include <iostream>
#include <cmath>
#include <fstream>

#define PI std::acos(-1)


int main() {
    std::ifstream cin("angle1.in");
    std::ofstream cout("angle1.out");
    cout.precision(10);  // вот бы ещё в условии до какого знака после запятой резать писалось...

    double x, y;
    cin >> x >> y;

    double o = std::atan2(y, x);
    if (o < 0) {
        o = 2 * PI + o;
    }

    cout << o;
}