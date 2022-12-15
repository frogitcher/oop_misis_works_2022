#include <iostream>
#include <cmath>
#include <iomanip>


double CircleRadiusAtZ(double z, double height, double width) {
    double ab = (width / 2);
    double c = (height / 2);
    return std::sqrt((ab * ab) * (1 - (z * z) / (c * c)));
}

double PartVolume(int steps, double height, double width, double height_from, double height_to) {
    // интересно, зачем гомер симпсон придумал интеграл?
    double pi = 3.14159265359;
    double area_sum = 0;
    double z_from = (height / 2) - height_to;
    double z_to = (height / 2) - height_from;
    double z_step_value = (z_to - z_from) / steps;
    for (int i = 0; i <= steps; i++) {
        double z_at = z_from + z_step_value * i;
        double radius = CircleRadiusAtZ(z_at, height, width);
        double area = pi * radius * radius;
        area_sum += area;
    }
    return ((height_to - height_from) / steps) * area_sum;
}

double RoundTo(double value, int decimal_places) {
    double precision = std::pow(10.0, -decimal_places);
    return std::round(value / precision) * precision;
}


int main() {
    std::cout << std::fixed << std::setprecision(6);
    double a, b;
    int n;
    std::cin >> a >> b >> n;
    for (int i = 0; i < n; i++) {
        double area = PartVolume(10000000, b, a, (b / n) * (i), (b / n) * (i + 1));
        std::cout << RoundTo(area, 6) << std::endl;
    }

}