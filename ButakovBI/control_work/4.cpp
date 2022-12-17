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



int main() {

	const double pi = acos(-1.0);
	double left_limit = 0;
	double right_limit = 1;
	const double eps = 0.0000001;

	const int num_iterations = 10000000;

	double delta = (right_limit - left_limit) / num_iterations;
	double ans = 0.0;

	for (int i = 1; i < num_iterations; i += 1) {
		ans += ((sin(delta * i) + sin(delta * (i - 1))) / 2) * delta;
	}
	std::cout << std::fixed << std::setprecision(7);
	std::cout << ans << std::endl;
	std::cout << -cos(1) + cos(0);
}