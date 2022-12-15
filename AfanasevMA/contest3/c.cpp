#include <iostream>
#include <cmath>
#include <iomanip>


enum CalculationMode {
    circle_area, trapezia_volume
};

double CircleRadius2AtZ(double z, double height, double width) {
    double ab = (width / 2);
    double c = (height / 2);
    return (ab * ab) * (1 - (z * z) / (c * c));
}

double TrapeziaVolume(double pi, double z_from, double z_to, double height, double width) {
    double r1 = CircleRadius2AtZ(z_from, height, width);
    double r2 = CircleRadius2AtZ(z_to, height, width);
    return pi * (z_to - z_from) * (r1 + std::max(0.0, std::sqrt(r1 * r2)) + r2) / 3;
}

double PartVolume(CalculationMode mode, int steps, double height, double width, double height_from, double height_to) {
    // интересно, зачем гомер симпсон придумал интеграл?
    double pi = 3.1415926535897932384626433832795;
    double z_from = (height / 2) - height_to;
    double z_to = (height / 2) - height_from;
    double z_step_value = (z_to - z_from) / steps;
    if (mode == circle_area) {
        double area_sum = 0;
        for (int i = 0; i <= steps; i++) {
            double z_at = z_from + z_step_value * i;
            double radius2 = CircleRadius2AtZ(z_at, height, width);
            double area = pi * radius2;
            area_sum += area;
        }
        return ((height_to - height_from) / steps) * area_sum;
    } else if (mode == trapezia_volume) {
        double volume_sum = 0;
        for (int i = 0; i < steps; i++) {
            double z_at_curr = z_from + z_step_value * i;
            double z_at_next = z_from + z_step_value * (i + 1);
            volume_sum += TrapeziaVolume(pi, z_at_curr, z_at_next, height, width);
        }
        return volume_sum;
    } else {
        throw std::invalid_argument("wtf??");
    }
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
        double volume = PartVolume(trapezia_volume, 10000000 / n, b, a, (b / n) * (i), (b / n) * (i + 1));
        std::cout << RoundTo(volume, 6) << std::endl;
    }

}