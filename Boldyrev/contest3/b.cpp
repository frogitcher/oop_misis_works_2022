#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

int main() {
    int n;
    double bombed_dots = 0;
    std::cin >> n;
    std::vector <std::vector <double>> bombs(n, std::vector <double> (3));
    for (int i = 0; i < n; ++i) {
        std::cin >> bombs[i][0] >> bombs[i][1] >> bombs[i][2];
    }
    for (double x = 0; x <= 1; x += 0.001) {
        for (double y = 0; y <= 1; y += 0.001) {
            for (int i = 0; i < n; ++i) {
                double s = std::pow(x - bombs[i][0], 2) + std::pow(y - bombs[i][1], 2);
                if (s <= std::pow(bombs[i][2], 2)) {
                    bombed_dots += 1;
                    break;
                }
            }
        }
    }
    std::cout << std::fixed << std::setprecision(5) << bombed_dots / 1e4; 
}