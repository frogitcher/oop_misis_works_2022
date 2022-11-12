#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <numeric>
#include <stdexcept>
#include <typeinfo>
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
	if (a == b) {
		std::cout << "Yes" << std::endl;
	}
	else {
		std::cout << "No" << std::endl;
	}
}

void Task3() {
	Rational a, b;
	std::cin >> a >> b;
	if (a > b) {
		std::cout << "Max = " << a << std::endl;
		std::cout << "Min = " << b << std::endl;
	}
	else if (a == b) {
		std::cout << "Max = Min = " << a << " = " << b << std::endl;
	}
	else {
		std::cout << "Max = " << b << std::endl;
		std::cout << "Min = " << a << std::endl;
	}
}

void Task4() {
	int n;
	std::cin >> n;
	std::vector<Rational> v(n);
	for (int i = 0; i < v.size(); ++i) {
		std::cin >> v[i];
	}
	Rational r(0);
	for (int i = 0; i < v.size(); ++i) {
		r += v[i];
	}
	std::cout << r << std::endl;
	Rational p(1);
	for (int j = 0; j < v.size(); ++j) {
		p *= v[j];
	}
	std::cout << p << std::endl;
}

void Task5() {
	Rational num;
	std::cin >> num;
	int n;
	std::cin >> n;
	std::vector<Rational> v(n);
	for (int i = 0; i < v.size(); ++i) {
		std::cin >> v[i];
	}
	for (int i = 0; i < v.size(); ++i) {
		std::cout << v[i] + num << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < v.size(); ++i) {
		std::cout << v[i] - num << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < v.size(); ++i) {
		std::cout << v[i] * num << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < v.size(); ++i) {
		std::cout << v[i] / num << ' ';
	}
	std::cout << std::endl;
}

void Task6() {
	int n;
	std::cin >> n;
	std::vector<Rational> v(n);
	for (int i = 0; i < v.size(); ++i) {
		std::cin >> v[i];
	}
	Rational max1 = v[0], min1 = v[0];
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] > max1) {
			max1 = v[i];
		}
		if (v[i] < min1) {
			min1 = v[i];
		}
	}
	std::cout << "Min: " << min1 << "\n" << "Max: " << max1 << std::endl;

}

void Task7() {
	std::string s;
	std::cin >> s;
	bool slash = false;
	bool ans1 = true, ans2 = false;
	int cnt = 0;
	int slash_index = -1;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == '/') {
			cnt += 1;
		}
	}
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] > 57 || s[i] < 47) {
			ans1 = false;
			break;
		}
		if (s[i] == '/') {
			slash = true;
			slash_index = i;
		}
	}
	if (slash_index > -1) {
		std::string num1 = s.substr(0, slash_index);
		std::string num2 = s.substr(slash_index + 1);
		if (num1 != "" && num2 != "") {
			ans2 = true;
		}
	}
	if (slash && ans1 && ans2 && (cnt == 1)) {
		std::cout << "Rational number" << std::endl;
	}
	else {
		std::cout << "Not rational number" << std::endl;
	}
}

void Task8() {
	Rational A, B;
	std::cin >> A >> B;
	if (A == 0 && B == 0) {
		std::cout << "Infinite answers" << std::endl;
	}
	else if (A == 0 && B != 0) {
		std::cout << "No answers" << std::endl;
	}
	else {
		std::cout << "X = " << B / A << std::endl;
	}
}

void Task1x() {
	Rational A1, B1, C1, A2, B2, C2, X, Y;
	std::cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
	if (A1 / A2 == B1 / B2 && A1 / A2 != C1 / C2) {
		std::cout << "No answers" << std::endl;
	}
	else if (A1 / A2 == B1 / B2 && A1 / A2 == C1 / C2) {
		std::cout << "Infinite answers" << std::endl;
	}
	else {
		X = (B1 * C2 - B2 * C1) / (B1 * A2 - B2 * A1);
		Y = (C1 - A1 * X) / B1;
		std::cout << "One answer: " << X << ',' << Y << std::endl;
	}
}

void Task2x() {
	int n;
	std::cin >> n;
	std::vector<Rational> v(n);
	for (int i = 0; i < v.size(); ++i) {
		std::cin >> v[i];
	}
	Rational ans1, ans2;
	bool is_ans = false;
	for (int i = 0; i < v.size(); ++i) {
		for (int j = i + 1; j < v.size(); ++j) {
			if ((v[i] + v[j]).GetDen() == 1) {
				ans1 = v[i];
				ans2 = v[j];
				is_ans = true;
				break;
			}
		}
	}
	if (is_ans) {
		std::cout << ans1 << ' ' << ans2 << std::endl;
	}
	else {
		std::cout << "No answer" << std::endl;
	}
}


int main() {
	Task1();
	Task2();
	Task3();
	Task4();
	Task5();
	Task6();
	Task7();
	Task8();
	Task1x();
	Task2x();
}
