#include "Rational.h"

int Rational::gcd(int a, int b) const{
	if (a == 0 || b == 0) {
		return a + b;
	}
	else {
		return gcd(b, a % b);
	}
}

void Rational::Normalize() {
	int g = (num==0)?den: gcd(std::abs(num), std::abs(den));
	num /= g;
	den /= g;
}

Rational Rational::operator+(const Rational& rhs) const {
	Rational r(GetNum() * rhs.GetDen() + GetDen() * rhs.GetNum(), GetDen() * rhs.GetDen());
	return r;
}

Rational Rational::operator+=(const Rational& rhs) {
	*this = *this + rhs;
	return *this;
}

Rational Rational::operator-(const Rational& rhs) const {
	Rational r(GetNum() * rhs.GetDen() - GetDen() * rhs.GetNum(), GetDen() * rhs.GetDen());
	return r;
}

Rational Rational::operator*(const Rational& rhs) const {
	Rational r(GetNum() * rhs.GetNum(), GetDen() * rhs.GetDen());
	return r;
}

Rational Rational::operator/(const Rational& rhs) const {
	Rational r(GetNum() * rhs.GetDen(), GetDen() * rhs.GetNum());
	return r;
}


bool Rational::operator==(const Rational rhs) const {
	return GetNum() * rhs.GetDen() == GetDen() * rhs.GetNum();
}

bool Rational::operator>(const Rational rhs) const {
	Rational r = *this - rhs;
	return  double(r.GetNum())/double(r.GetDen())> 0;
}

std::ostream& operator<<(std::ostream& ostr, const Rational& rhs) {
	return ostr << rhs.AsString();
}
std::istream& operator>>(std::istream& istr, Rational& rhs) {
	int a, b;
	char c;
	istr >> a >> c >> b;
	rhs = Rational(a, b);
	return istr;
}