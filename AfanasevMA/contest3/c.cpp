#include <iostream>
#include <cmath>
#include <iomanip>


#define PI std::acos(-1)


double cap_volume(double width, double height, double height_cap) {
    double h = height_cap;
    double a = width / 2;
    double b = width / 2;
    double c = height / 2;
    return ((PI * a * b) / (3 * c * c)) * h * h * (3 * c - h);
}


double round_to(double value, int decimal_places) {
    double precision = std::pow(10.0, -decimal_places);
    return std::round(value / precision) * precision;
}


int main() {
    std::cout << std::fixed << std::setprecision(6);
    double a, b;
    int n;
    std::cin >> a >> b >> n;
    double prev_cap_vol = 0;
    for (int i = 0; i < n; i++) {
        double cap_vol = cap_volume(a, b, (b / n) * (i + 1));
        std::cout << round_to(cap_vol - prev_cap_vol, 6) << std::endl;
        prev_cap_vol = cap_vol;
    }

}