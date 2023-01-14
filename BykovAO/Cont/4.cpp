#include <iostream>
#include <iomanip>

int main() {

    int S = 0;

    for (double x = -1; x <= 1; x + 0.001) {
        if ((1 - 5 * x * x) > 0) {
            double y1 = sqrt(1 - 5 * x * x);
            double y2 = sqrt(1 - x * x) / 5.0;
            y1 = min(y1, y2);
            S += 0.001 * y1;
        }
    }

    std::cout.fixed();
    std::cout << std::setprecision(4);

    std::cout << S << std::endl;

    return 0;
}