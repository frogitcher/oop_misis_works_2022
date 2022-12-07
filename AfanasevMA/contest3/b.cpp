#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <array>


bool is_intersection(double p_x, double p_y, std::array<double, 3>& bomb) {
    double x_0 = p_x - bomb[0];
    double y_0 = p_y - bomb[1];
    return x_0 * x_0 + y_0 * y_0 <= bomb[2] * bomb[2];
}



int main() {
    int n = 0;
    std::cin >> n;
    std::vector<std::array<double, 3>> bombs;

    for (int i = 0; i < n; i++) {
        double x, y, r;
        std::cin >> x >> y >> r;
        bombs.push_back(std::array<double, 3> {x, y, r});
    }
    int n_dots_ok = 0;
    for (int p_x = 0; p_x <= 1000; p_x++) {
        for (int p_y = 0; p_y <= 1000; p_y++) {
            for (auto& bomb : bombs) {
                if (is_intersection(p_x / 1000.0, p_y / 1000.0, bomb)) {
                    n_dots_ok++;
                    break;
                }
            }
        }
    }
    std::cout << n_dots_ok / 10000.0;
}