#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <numeric>
#include <stdexcept>
class Rational {
private:
	int num = 0, den = 1;
	int gcd(int a, int b) const;
	void Normalize();

public:
	std::string AsString() const {return std::to_string(num) + '/' + std::to_string(den);}

	Rational(int a = 0, int b = 1) {
		num = a;
		den = b;
		if (den == 0) {
			throw "Can't be 0";
		}
		Normalize();
	}
	int GetNum() const { return num; }
	int GetDen() const { return den; }
	~Rational() = default;

	Rational operator+(const Rational& rhs) const;
	Rational operator+=(const Rational& rhs);
	Rational operator-(const Rational& rhs) const;
	Rational operator*(const Rational& rhs) const;
	Rational operator/(const Rational& rhs) const;
	bool operator==(const Rational rhs) const;
	bool operator>(const Rational rhs) const;
};

std::ostream& operator<<(std::ostream& ostr, const Rational& rhs);
std::istream& operator>>(std::istream& istr, Rational& rhs);