#include"Rational.h"

Rational Rational::operator+(const Rational& rhs) const {
	int den = GetDen() * rhs.GetDen();
	int num = GetNum() * rhs.GetDen() + rhs.GetNum() * GetDen();
	return Rational(num, den);
}
Rational Rational::operator-(const Rational& rhs) const {
	int den = GetDen() * rhs.GetDen();
	int num = GetNum() * rhs.GetDen() - rhs.GetNum() * GetDen();
	return Rational(num, den);
}
Rational Rational::operator*(const Rational& rhs) const {
	int den = GetDen() * rhs.GetDen();
	int num = GetNum() * rhs.GetNum();
	return Rational(num, den);
}
Rational Rational::operator/(const Rational& rhs) const {
	int den = GetDen() * rhs.GetNum();
	int num = GetNum() * rhs.GetDen();
	return Rational(num, den);
}
Rational& Rational::operator+=(const Rational& rhs) {
	return *this = *this + rhs;
}
Rational& Rational::operator-=(const Rational& rhs) {
	return *this = *this - rhs;
}
Rational& Rational::operator*=(const Rational& rhs) {
	return *this = *this * rhs;
}
Rational& Rational::operator/=(const Rational& rhs) {
	return *this = *this / rhs;
}
void Rational :: Normalize() {
	int g = gcd(std::abs(num_), std::abs(den_));
	num_ /= g;
	den_ /= g;
}
Rational :: Rational (int num, int den) {
	num_ = num;
	den_ = den;
	if (den_ == 0) { throw "Denomination can't be zero!!!"; }
	Normalize();
}
Rational Rational:: operator-() const {
	return Rational(-GetNum(), GetDen());
}
Rational Rational:: operator+() const {
	return Rational(GetNum(), GetDen());
}
Rational Rational::operator++() {
	return *this += Rational(1,1);
}
Rational Rational::operator++(int) {
	Rational tmp(*this);
	*this += Rational(1,1);
	return tmp;
}
Rational Rational::operator--() {
	return *this -= Rational(1,1);
}
Rational Rational::operator--(int) {
	Rational tmp(*this);
	*this -= Rational(1,1);
	return tmp;
}

bool Rational:: operator==(const Rational& rhs) const {
	return (GetNum() == rhs.GetNum()) && (GetDen() == rhs.GetDen());
}
bool Rational::operator!=(const Rational& rhs) const {
	return !(*this == rhs);
}
bool Rational::operator<(const Rational& rhs) const {
	return GetNum() * rhs.GetDen() < rhs.GetNum() * GetDen();
}
bool Rational::operator>(const Rational& rhs) const {
	return GetNum() * rhs.GetDen() > rhs.GetNum() * GetDen();
}
bool Rational::operator<=(const Rational& rhs) const {
	return GetNum() * rhs.GetDen() <= rhs.GetNum() * GetDen();
}
bool Rational::operator>=(const Rational& rhs) const {
	return GetNum() * rhs.GetDen() >= rhs.GetNum() * GetDen();
}

Rational::Rational(const Rational& other) {
	num_ = other.num_;
	den_ = other.den_;
}
Rational& Rational:: operator=(const Rational& rhs) {
	num_ = rhs.GetNum();
	den_ = rhs.GetDen();
	return *this;
}

Rational Rational:: operator+(int rhs) const{
	int den = GetDen();
	int num = GetNum() + rhs * GetDen();
	return Rational(num, den);
}
Rational Rational:: operator-(int rhs) const {
	int den = GetDen();
	int num = GetNum() - rhs * GetDen();
	return Rational(num, den);
}
Rational Rational:: operator*(int rhs) const {
	int den = GetDen();
	int num = GetNum() * rhs;
	return Rational(num, den);
}
Rational Rational:: operator/(int rhs) const {
	int den = GetDen() * rhs;
	int num = GetNum();
	return Rational(num, den);
}
Rational& Rational:: operator+=(int rhs) {
	return *this = *this + rhs;
}
Rational& Rational:: operator-=(int rhs) {
	return *this = *this - rhs;
}
Rational& Rational:: operator*=(int rhs) {
	return *this = *this * rhs;
}
Rational& Rational:: operator/=(int rhs) {
	return *this = *this / rhs;
}

std::ostream& operator<<(std::ostream& ostr, const Rational& r) {
	return ostr << r.AsString();
}

std::istream& operator>>(std::istream& istr, Rational& r) {
	int a, b;
	char c;
	istr >> a >> c >> b;
	r = Rational(a, b);
	return istr;
}
