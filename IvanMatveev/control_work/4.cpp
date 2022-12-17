#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <iomanip>

typedef long double ld;

using namespace std;

ld POW(ld a, int power) {
	if (power == 0) {
		return 1;
	}
	if (power % 2 == 0) {
		return POW(a * a, power / 2);
	}
	return a * POW(a, power - 1);
}
ld fact(ld k) {
	for (int i = k-1; i >= 2; i--) {
		k = k * i;
	}
	return k;
}
ld SIN(ld x) {
	return sin(x);
}
ld F(ld x) {
	ld ans;
	return x - (POW(x, 3) / fact(3)) + (POW(x, 5) / fact(5)) - (POW(x, 7) / fact(7)) + (POW(x, 9) / fact(9));
}
int main() {
	cout << fixed << setprecision(15);
	ld pi = acos(-1);
	ld left_lim = 0;
	ld right_lim = 1;
	//cout << -cos(0) + cos(1);
	ld num_it = 100000000;
	ld result = 0;
	ld delta = (-left_lim + right_lim) / num_it;
	for (int i = 0; i < num_it; ++i) {
		ld x = left_lim + delta * i;
		//ld y = F(x);
		ld y = SIN(x);
		result += y * delta;
	}
	//cout << fact(4);
	cout << result;
}
