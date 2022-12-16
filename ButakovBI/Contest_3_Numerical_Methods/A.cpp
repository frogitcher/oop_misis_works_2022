#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cmath>
#include <iomanip>

double f1(int n, double a) {
	for (int i = 1; i <= n; i += 2) {
		a *= i;
	}
	return a;
}

double f2(int n, double a) {
	for (int i = 2; i <= n; i += 2) {
		a *= i;
	}
	return a;
}

double my_pow(double val, int n) {
	double res = val;
	for (int i = 1; i < n; ++i) {
		res *= val;
	}
	return res;
}

int main() {

	std::ifstream fin("angle1.in");
	std::ofstream fout("angle1.out");

	const double Pi = acos(-1.0);
	double x = 0.0, y = 0.0;
	fin >> x >> y;

	long double result = atan2(y, x);
	if (result < 0) {
		result += 2 * Pi;
	}
	double answer = 0.0;
	double z = sqrt(x * x + y * y);
	const double eps = 1e-9;

	long double val = y / z;

	for (int n = 0; my_pow(val, 2 * n + 1) / (2 * n + 1) * f1(2 * n - 1, 1.0) / f2(2 * n, 1.0) > eps; n += 1) {
		answer += my_pow(val, 2 * n + 1) / (2 * n + 1) * f1(2 * n - 1, 1.0) / f2(2 * n, 1.0);
	}
	fout.precision(10);
	fout << answer;

}
