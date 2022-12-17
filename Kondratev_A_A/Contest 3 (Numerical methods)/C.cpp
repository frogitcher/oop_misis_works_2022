#include <iostream>
#include <iomanip>
#include<cmath>
#include <vector>


using namespace std;

const double pi = acos(-1);

double F(const double x, const double a, const double b) {
    double canonical_x = a - x;
    return max(0.0, sqrt((1 - canonical_x * canonical_x / (a * a)) * b * b));
}

double calculateVolume(double left_bound, double right_bound,
                       const double a, const double b) {
    const int n_iterations = 2000000;
    double volume = 0, step = (right_bound - left_bound) / n_iterations;
    for (int i = 0; i < n_iterations; ++i) {
        double current_bound = left_bound + i * step;
        double r1 = F(current_bound, a, b);
        current_bound += step;
        double r2 = F(current_bound, a, b);
        volume += pi * step * (r1 * r1 + r1 * r2 + r2 * r2) / 3;
    }
    return volume;
}

int main() {
    cout << fixed << setprecision(20);
    double a, b;
    int n;
    cin >> a >> b >> n;
    double piece_width = b / n;
    double piece_count = n / 2 + n % 2;
    double current_x = 0;
    vector<double> result(piece_count);
    for (int i = 0; i < piece_count; ++i) {
        double new_x = current_x + piece_width;
        result[i] = calculateVolume(current_x, new_x, b / 2, a / 2);
        current_x = new_x;
    }
    for (int i = 0; i < piece_count; ++i) {
        cout << result[i] << '\n';
    }
    for (int i = n / 2 - 1; i >= 0; --i) {
        cout << result[i] << '\n';
    }
}