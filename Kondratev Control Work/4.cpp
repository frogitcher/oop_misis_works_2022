#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

const double eps = 1e-7;
const double pi = acos(-1);

unsigned long long factorial(const int x) {
    if (!x) {
        return 1;
    }
    unsigned long long result = 1;
    for (int i = 2; i <= x; ++i) {
        result *= i;
    }
    return result;
}

double MaclorenSin(double x) {
    double result = 0;
    double step = 1;
    for (int k = 0; (k < 20) && (fabs(step) > eps); ++k) {
        step = pow(-1, k) * pow(x, 2 * k + 1) / factorial(2 * k + 1);
        result += step;
    }
    return result;
}

int main() {
    cout << fixed << setprecision(10);
    vector<double> inputs = {0, pi / 4, pi / 2, -pi / 4, pi};
    for (auto input: inputs) {
        cout << "Input: " << input << " Result: " << MaclorenSin(input) << " Sin: " << sin(input) << endl;
    }
}