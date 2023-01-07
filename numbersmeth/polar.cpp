#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream fin("angle1.in");
	ofstream fout("angle1.out");
	fout << fixed << setprecision(10);
	const double pi = acos(-1.0);
	double x, y;
	fin >> x >> y;
	double rez = atan2(y, x);
	if (rez < 0) {
		rez += 2 * pi;
	}
	fout << rez;
	return 0;
}