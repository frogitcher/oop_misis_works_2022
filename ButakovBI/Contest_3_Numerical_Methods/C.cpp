#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cmath>
#include <iomanip>
#include <array>
#include <random>

const double pi = 3.1415926535897932384626;

double sqr(const double x, const double a, const double b) {
	return std::sqrt(b * b * (1 - x * x / (a * a)));
}

int main() {
	double a = 0.0, b = 0.0;
	int n = 0;
	std::cin >> b >> a >> n;



	const int num_iterations = 2000000;



	const double len = a / n;
	const int cnt_parts = n / 2 + n % 2;
	std::vector<double> result(cnt_parts);
	const double delta = len / num_iterations;

	a /= 2;
	b /= 2;

	for (int i = 0; i < cnt_parts; i += 1) {
		double left_limit = a - len * cnt_parts + len * i;
		double right_limit = a - len * cnt_parts + len * (i + 1);
		double cnt = 0.0;
		for (int j = 0; j < num_iterations; j += 1) {
			double left_x = left_limit + delta * j;
			double right_x = left_limit + delta * (j + 1);
			double left_y = sqr(left_x, a, b);
			double right_y = sqr(right_x, a, b);
			cnt += pi * delta * (left_y * left_y + right_y * left_y + right_y * right_y) / 3;
		}
		result[i] = cnt;
	}

	std::cout << std::fixed << std::setprecision(6);
	if (n % 2 == 0) {
		for (int i = cnt_parts - 1; i > -1; --i) {
			std::cout << result[i] << '\n';
		}
		for (int i = 0; i < cnt_parts; ++i) {
			std::cout << result[i] << '\n';
		}
	}
	else {
		for (int i = cnt_parts - 1; i > -1; --i) {
			std::cout << result[i] << '\n';
		}
		for (int i = 1; i < cnt_parts; ++i) {
			std::cout << result[i] << '\n';
		}
	}
	return 0;
}