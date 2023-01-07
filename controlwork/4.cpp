#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int Fact(int n) {
	int i = n;
	while (i >= 1) {
		n *= i;
		i -= 1;
	}
	return n;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout << fixed << setprecision(10);
	const long double pi = acos(-1.0);
	long double x;
	cin >> x;
	long double ransw = sin(x);
	const long double delta = pow(10, -6);
	long double ans = 0.0;
	int k = 0;
	while (abs(ans - ransw) >= delta) {
		ans += pow(-1.0, k) * (pow(x, 2 * k + 1) / (Fact(2 * k + 1)));
		k += 1;
	}
	for (int j = 0; j <= k; j += 1) {
		ans += pow(-1, j) * (pow(x, 2 * j + 1) / (Fact(2 * j + 1)));
	}
	return 0;
}