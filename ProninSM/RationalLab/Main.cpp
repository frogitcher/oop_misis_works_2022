#include <iostream>
#include <string>
#include <cmath>
#include <numeric>
#include <stdexcept>
#include <vector>
#include "Rational.h"

void Task1() {
	Rational a, b;
	std::cin >> a >> b;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;
}

void Task2() {
	Rational a, b;
	std::cin >> a >> b;
	std::string ans;
	ans=(a == b)?"Yes":"No";
	std::cout << ans;
}

void Task3() {
	Rational a, b;
	std::cin >> a >> b;
	std::cout << ((a > b) ? a : b);
}

void Task4() {
	int n;
	std::cin >> n;
	Rational x,ans;
	for (int i = 0; i < n; ++i) {
		std::cin >> x;
		ans += x;
	}
	std::cout << ans;
}

void Task5() {
	int x, n;
	std::cin >> x >> n;
	Rational y(x);
	std::vector <Rational> v(n),v1(n),v2(n),v3(n),v4(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> v[i];
	}
	for (int i = 0; i < n; ++i) {
		v1[i] = v[i] + y;
		v2[i] = v[i] - y;
		v3[i] = v[i] * y;
		v4[i] = v[i] / y;
	}
	for (int i = 0; i < n; ++i) {
		std::cout << v1[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < n; ++i) {
		std::cout << v2[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < n; ++i) {
		std::cout << v3[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < n; ++i) {
		std::cout << v4[i] << ' ';
	}
}

void Task6() {
	int n;
	std:: cin >> n;
	Rational x;
	std::cin >> x;
	Rational ansmax(x),ansmin(x);
	for (int i = 1; i < n; ++i) {
		std::cin >> x;
		ansmax = (x > ansmax) ? x : ansmax;
		ansmin = (ansmin > x) ? x : ansmin;
	}
	std::cout << ansmin <<' '<< ansmax;
}

void Task7() {
	std::string s;
	std::cin >> s;
	int i;
	for (i = 0; i < s.length(); ++i) {
		if (s[i] == '/') {
			break;
		}
	}
	if (i == s.length() - 1 || i == 0) {
		std::cout << "No";
	}
	else {
		std::string dens;
		for (int z = i+1; z < s.length(); ++z) {
			dens += s[z];
		}
		if (stoi(dens) != 0) {
			std::cout << "Yes";
		}
		else {
			std::cout << "No";
		}
		
	}
}

void Task8() {
	int a, b;
	std::cin >> a >> b;
	Rational r(b, a);
	std::cout << r;
}


int main() {
	//Task1();
	//Task2();
	//Task3();
	//Task4();
	//Task5();
	//Task6();
	//Task7();
	//Task8();


}