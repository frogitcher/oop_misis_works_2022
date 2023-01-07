#include <iostream>
#include <vector>
#include <array>
#include <random>

using namespace std;

bool F(array<double, 3> bomb, double x, double y) {
    double x1 = x - bomb[0];
    double y1 = y - bomb[1];
    return x1 * x1 + y1 * y1 < bomb[2] * bomb[2];
}
int main() {
    int n = 0;
    cin >> n;

    vector<array<double, 3> > bombs;

    for (int i = 0; i < n; i += 1) {
        double x_bomb = 0.0, y_bomb = 0.0, r = 0.0;
        cin >> x_bomb >> y_bomb >> r;
        bombs.push_back(array<double, 3> {x_bomb, y_bomb, r});
    }

    double left_limit = 0;
    double right_limit = 1;
    int cnt_inside = 0;
    int num_iterations = 1000000;

    mt19937 rng;
    uniform_real_distribution<double> urd(left_limit, right_limit);

    for (int i = 0; i < num_iterations; i += 1) {
        double x = urd(rng);
        double y = urd(rng);
        for (auto& bomb : bombs) {
            if (F(bomb, x, y)) {
                cnt_inside += 1;
                break;
            }
        }
    }
    cout << double(cnt_inside) / num_iterations * 100;
 
}