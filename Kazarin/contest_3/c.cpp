#include <iostream>
#include <cmath>
#include <utility>
#include <iomanip>

const double kEps = 1e-6;
const double kPi = std::acos(-1);
const int kNumIters = 1e4;

double a, b;
int n;

double Square(double x) {
	if (1 - std::pow(x / a, 2) < 0)
		return 0;

	double y = std::sqrt(std::pow(b, 2) * (1 - std::pow(x / a, 2)));
	return kPi * pow(y, 2);
}

int main() {
	std::cout << std::setprecision(6) <<std::fixed;

	std::cin >> a >> b >> n;
	
	a /= 2;
	b /= 2;

	std::swap(a, b);
	double piece = 2 * a / n;

	double left_x = -a;
	for (int i = 0; i < n; ++i) {
		double v = Square(left_x) + Square(left_x + piece);
		double dx = piece / kNumIters;

		for (int i = 1; i < kNumIters; ++i) {
			double val = Square(left_x + dx * i);
			v += i % 2 == 1 ? 4 * val : 2 * val;
		}

		v *= dx / 3;

		std::cout << v << '\n';
		left_x += piece;
	}
}
