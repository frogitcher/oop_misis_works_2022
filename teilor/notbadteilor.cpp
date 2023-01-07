#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>

using namespace std;

long double Fact(long double p) { //прога, конечно, не считает идеально
	long double rez = 1;          //при каких-то значениях идут расхождения (бывает после сотых)
	while (p >= 1) {              //многие точки подсчитывает до 10 знаков правильно
		rez *= p;
		p -= 1;
	}
	return rez;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long double const pi = acos(-1.0);
	ifstream fin("angle1.in");
	ofstream fout("angle1.out");
	fout << fixed << setprecision(10);
	long double x, y, ans = 0, gipot;
	fin >> x >> y;
	gipot = sqrt(x * x + y * y);
	long double sin = y / gipot;
	for (long double n = 0; n <= 85; n += 1) {
		ans += (Fact(2 * n) * (pow(sin, (2 * n + 1)))) / (pow(4, n) * Fact(n) * Fact(n) * (2 * n + 1));
	}
	if (x > 0 && y > 0) {
		fout << ans;
	}
	else if (x > 0 && y < 0) {
		fout << 2 * pi + ans;
	}
	else {
		fout << pi - ans;
	}
	return 0;
}