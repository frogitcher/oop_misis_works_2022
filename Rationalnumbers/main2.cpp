#include"Rational.h"
#include<vector>

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
		std::cout << "Yes. The numbers are equal" << std::endl;
	}
	else {
		std::cout << "No. The numbers aren't equal" << std::endl;
	}
}
void Task3() {
	Rational a, b;
	std::cin >> a >> b;
	if (a > b) {
		std::cout << "The largest number is " << a << std::endl;
		std::cout << "The smallest number is " << b << std::endl;
	}
	else if (b > a) {
		std::cout << "The largest number is " << b << std::endl;
		std::cout << "The smallest number is " << a << std::endl;
	}
	else {
		std::cout << "The numbers are equal" << std::endl;
	}
}
void Task4() {
	int n;
	std::cin >> n;
	std::vector<Rational> v(n);
	for (int i = 0; i < n; i += 1) {
		std::cin >> v[i];
	}
	Rational r(0);
	Rational pr(1);
	for (int i = 0; i < n; i += 1) {
		r += v[i];
		pr *= v[i];
	}
	std::cout << r << std::endl;
	std::cout << pr << std::endl;
}
void Task5() {
	int n;
	Rational c, ch;
	std::cin >> n;
	std::cin >> ch;
	std::vector<Rational> v(n);
	std::vector<Rational> v1;
	std::vector<Rational> v2;
	std::vector<Rational> v3;
	std::vector<Rational> v4;
	for (int i = 0; i < n; i += 1) {
		std::cin >> v[i];
	}
	for (int i = 0; i < n; i += 1) {
		c = v[i];
		c += ch;
		v1.push_back(c);
	}
	for (int i = 0; i < n; i += 1) {
		std::cout << v1[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < n; i += 1) {
		c = v[i];
		c -= ch;
		v2.push_back(c);
	}
	for (int i = 0; i < n; i += 1) {
		std::cout << v2[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < n; i += 1) {
		c = v[i];
		c *= ch;
		v3.push_back(c);
	}
	for (int i = 0; i < n; i += 1) {
		std::cout << v3[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < n; i += 1) {
		c = v[i];
		c /= ch;
		v4.push_back(c);
	}
	for (int i = 0; i < n; i += 1) {
		std::cout << v4[i] << ' ';
	}
	std::cout << std::endl;
}
void Task6() {
	int n;
	Rational max, min;
	std::cin >> n;
	std::vector<Rational> v;
	for (int i = 0; i < n; i += 1) {
		Rational ch;
		std::cin >> ch;
		v.push_back(ch);
	}
	max = v[0];
	min = v[0];
	for (int i = 1; i < n; i += 1) {
		if (v[i] > max) {
			max = v[i];
		}
		if (v[i] < min) {
			min = v[i];
		}
	}
	std::cout << max << ' ' << min << std::endl;
}
void Task7() {
	std::cout << "If the number is rational, it will remain on the screen." << std::endl;
	Rational ch;
	std::cin >> ch;
	long double c;
	std::cin >> c;
	std::cout << "Yes" << std::endl;//любой дабл будет рациональным.
}
void Task8() {
	Rational a, b, zero;
	std::cin >> a >> b;
	zero = Rational();
	if (a == zero) {
		if (b == zero) {
			std::cout << "An infinite number of solutions!" << std::endl;
		}
		else {
			std::cout << "There are no solutions!" << std::endl;
		}
	}
	else if (b == zero) {
		std::cout << 0 << std::endl;
	}
	else {
		std::cout << b / a << std::endl;
	}
}
void Task2star() {
	int n, fl = 0;
	std::cin >> n;
	std::vector<Rational> v;
	for (int i = 0; i < n; i += 1) {
		Rational ch;
		std::cin >> ch;
		v.push_back(ch);
	}
	for (int i = 0; i < n - 1; i += 1) {
		for (int j = i + 1; j < n; j += 1) {
			Rational summ;
			summ = v[i] + v[j];
			if ((summ.GetDen() == 1) && (fl == 0)) {
				std::cout << v[i] << ' ' << v[j] << std::endl;
				fl = 1;
			}
		}
	}
	if (fl == 0) {
	std::cout << "No answer!)" << std::endl;
	}
}
int main() {
	std::cout << "Task1" << std::endl;
	Task1();
	std::cout << "Task2" << std::endl;
	Task2();
	std::cout << "Task3" << std::endl;
	Task3();
	std::cout << "Task4" << std::endl;
	Task4();
	std::cout << "Task5" << std::endl;
	Task5();
	std::cout << "Task6" << std::endl;
	Task6();
	std::cout << "Task7" << std::endl;
	Task7();
	std::cout << "Task8" << std::endl;
	Task8();
	std::cout << "Task2*" << std::endl;
	Task2star();
	return 0;
}