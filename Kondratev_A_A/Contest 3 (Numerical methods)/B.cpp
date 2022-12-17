#include <iostream>
#include <vector>
#include <array>
#include <random>

using namespace std;

bool IsInside(array<double, 2> point, vector<array<double, 3>> &bombs) {
    for (auto bomb: bombs) {
        double distance = pow(point[0] - bomb[0], 2) + pow(point[1] - bomb[1], 2);
        if (distance <= bomb[2]) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<array<double, 3>> bombs(n);
    for (int i = 0; i < n; ++i) {
        cin >> bombs[i][0] >> bombs[i][1] >> bombs[i][2];
        bombs[i][2] *= bombs[i][2];
    }
    const double left_bound = 0;
    const double right_bound = 1;
    const int n_iterations = 1000000;
    mt19937 correct_rand;
    uniform_real_distribution<double> rand_range(left_bound, right_bound);
    array<double, 2> point;
    double n_points_in_bombs = 0;
    for (int i = 0; i < n_iterations; ++i) {
        point = {rand_range(correct_rand), rand_range(correct_rand)};
        n_points_in_bombs += IsInside(point, bombs);
    }
    double plot_share = double(n_points_in_bombs) / n_iterations;
    cout << plot_share * pow(right_bound - left_bound, 2) * 100;
}