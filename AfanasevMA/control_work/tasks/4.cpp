#include <cmath>
#include <iostream>


const int N_PARTS = 100000;


double GetAreaOf(double x_from, double x_to) {
    return (x_to - x_from) * std::sin((x_to - x_from) / 2 + x_from);
}

int main() {
    std::cout.precision(7);
    double reference = -std::cos(1) + std::cos(0);
    std::cout << "Reference value: " << reference << std::endl;
    double x_from = 0;
    double x_to = 1;
    double part_width = (x_to - x_from) / N_PARTS;
    double total_area = 0;
    for(int i = 0; i < N_PARTS; ++i) {
        double area_part = GetAreaOf(i * part_width, (i + 1) * part_width);
        total_area += area_part;
    }
    std::cout << "Integrated iteratively value: " << total_area << std::endl;
    std::cout << "Absolute error value: " << std::abs(total_area - reference);
};