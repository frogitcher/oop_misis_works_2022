#include<iostream>
#include<cmath>
#include<iomanip>
#include<map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(10);
	cin.tie(nullptr);
	double summ = 0;
	int n;
	cin >> n;
	multimap<double, double> m;
	for (int j = 1; j <= n; j += 1) {
		double left_limit = 0;
		double right_limit = 1;
		int num_iterations = 80;
		int cnt_inside = 0;
		double xo, yo, r;
		cin >> xo >> yo >> r;
		for (int i = 0; i < num_iterations; ++i) {
			for (int j = 0; j < num_iterations; ++j) {
				double x = (right_limit - left_limit) / num_iterations * i;
				double y = (right_limit - left_limit) / num_iterations * j;
				int fl = 0;
				if (((x - xo) * (x - xo) + (y - yo) * (y - yo)) <= r * r) {
					if (m.find(x) != m.end()) {
						for (auto& item : m) {
							if (item.first == x && item.second == y) {
								fl = 1;
							}
						}
					}
					if (fl == 0) {
						cnt_inside += 1;
						m.insert(std::pair<double, double>(x, y));
					}
				}
			}
		}
		double part = double((cnt_inside) / pow(num_iterations, 2));
		double s = part * pow(right_limit - left_limit, 2);
		summ += s;
	}
	cout << summ * 100;
	return 0;
}