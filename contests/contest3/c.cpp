#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

double const PI = acos(-1.0);

double F(double const x, double const a, double const b) {
    return sqrt(max(b * b * (1 - x * x / (a * a)), 0.0));
}

int main() {
    cout << fixed << setprecision(6);
    double a, b;
    int n;
    cin >> b >> a >> n;
    int const count_of_slices = n / 2 + n % 2;
    int const num_of_iterations = 1000000;
    double const len_of_slice = a / n;
    double const delta = len_of_slice / num_of_iterations;
    vector <double> slices(count_of_slices);
    a /= 2;
    b /= 2;
    for (int i = 0; i < count_of_slices; i++) {
        double left_limit = a - len_of_slice * count_of_slices + len_of_slice * (i);
        double right_limit = a - len_of_slice * count_of_slices + len_of_slice * (i + 1);
        double volume = 0;
        for (int j = 0; j < num_of_iterations; ++j) {
            double left_x = left_limit + delta * j;
            double right_x = left_limit + delta * (j + 1);
            double left_y = F(left_x, a, b);
            double right_y = F(right_x, a, b);
            volume += PI * delta * (left_y * left_y + left_y * right_y + right_y * right_y) / 3;
        }
        slices[i] = volume;
    }
    if (n % 2 == 0) {
        for (int i = count_of_slices - 1; i > -1; --i) {
            std::cout << slices[i] << '\n';
        }
        for (int i = 0; i < count_of_slices; i++) {
            cout << slices[i] << '\n';
        }
    }
    else {
        for (int i = count_of_slices - 1; i > -1; --i) {
            cout << slices[i] << '\n';
        }
        for (int i = 1; i < count_of_slices; i++) {
            cout << slices[i] << '\n';
        }
    }
}