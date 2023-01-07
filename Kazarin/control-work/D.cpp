#include <cmath>
#include <iostream>
#include <iomanip>

int kNumIters = 1e7;

double Func(double x) {
	return std::sin(x);
	//return x;
}

int main() {
	std::cout << std::setprecision(10) << std::fixed;

	double lo = 0, hi = 1;

	double ans = Func(0) + Func(1);
	double dx = (hi - lo) / kNumIters;

	for (int i = 1; i < kNumIters; ++i) {
		double x = lo + i * dx;
		ans += i % 2 == 1 ? 4 * Func(x) : 2 * Func(x);
	}

	ans *= dx / 3;

	std::cout << ans << '\n';
	std::cout << "correct: " << -std::cos(1) + std::cos(0) << '\n';
}