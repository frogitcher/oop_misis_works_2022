#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double F(double x) {
	return sin(x);
}

bool IsInside(double x, double y) {
	return F(x) < y;
}
double left_limit = 0;
double right_limit = 1;


int num_iterations = 1000000;

int cnt_inside = 0;

int main() {

	cout << fixed << setprecision(10);
	double left_limit = 0;
	double right_limit = 1;
	int num_iterations = 1000000;

	double result = 0;

	double delta = (right_limit - left_limit) / num_iterations;


	for (int i = 0; i < num_iterations; ++i) {
		double left_x = left_limit + delta * i;
		double right_x = left_limit + delta * (i + 1);
		double left_y = F(left_x);
		double right_y = F(right_x);
		result += (left_y + right_y) / 2 * delta;

	}
	double part = double(cnt_inside) / num_iterations;
	double s = part * (right_limit - left_limit) * (right_limit - left_limit);
	cout << s << endl;
	cout << -cos(1) + cos(0);
}