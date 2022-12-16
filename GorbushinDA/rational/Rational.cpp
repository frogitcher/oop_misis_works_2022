#include "Rational.h"

void Rational::normalise() {
    if (num_ < 0 && den_ < 0) { num_ *= -1; den_ *= -1; }
    int g = gcd(std::abs(num_), std::abs(den_));
    num_ /= g;
    den_ /= g;
}

Rational::Rational(int num, int den) {
    num_ = num;
    den_ = den;
    if (den_ == 0) {
        throw "Denominator can't be zero";
    }
    normalise();
}
Rational::Rational(const Rational& other) {
    num_ = other.GetNum();
    den_ = other.GetDen();
}

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
    int den = GetDen() * ((rhs.GetNum() < 0) ? rhs.GetNum() * -1 : rhs.GetNum());
    int num = GetNum() * ((rhs.GetNum() < 0) ? rhs.GetDen() * -1 : rhs.GetDen());
    return Rational(num, den);
}
Rational& Rational::operator+=(const Rational& rhs) { return *this = *this + rhs; }
Rational& Rational::operator-=(const Rational& rhs) { return *this = *this - rhs; }
Rational& Rational::operator*=(const Rational& rhs) { return *this = *this * rhs; }
Rational& Rational::operator/=(const Rational& rhs) { return *this = *this / rhs; }

Rational& Rational::operator=(const Rational& rhs) {
    num_ = rhs.GetNum();
    den_ = rhs.GetDen();
    return *this;
}

Rational Rational::operator-() { return Rational(-GetNum(), GetDen()); }
Rational Rational::operator+() { return Rational(GetNum(), GetDen()); }

Rational Rational::operator++(int) {
    Rational tmp(*this);
    *this += 1;
    return tmp;
}
Rational& Rational::operator++() {
    return *this += Rational(1);
}
Rational Rational::operator--(int) {
    Rational tmp(*this);
    *this -= 1;
    return tmp;
}
Rational& Rational::operator--() {
    return *this -= Rational(1);
}

bool Rational::operator==(const Rational& rhs) { return (GetNum() == rhs.GetNum() && GetDen() == rhs.GetDen()); }
bool Rational::operator!=(const Rational& rhs) { return (GetNum() != rhs.GetNum() || GetDen() != rhs.GetDen()); }
bool Rational::operator>=(const Rational& rhs) { return (GetNum() * rhs.GetDen() >= rhs.GetNum() * GetDen()); }
bool Rational::operator<=(const Rational& rhs) { return (GetNum() * rhs.GetDen() <= rhs.GetNum() * GetDen()); }
bool Rational::operator>(const Rational& rhs) { return (GetNum() * rhs.GetDen() > rhs.GetNum() * GetDen()); }
bool Rational::operator<(const Rational& rhs) { return (GetNum() * rhs.GetDen() < rhs.GetNum() * GetDen()); }

Rational Rational::operator+(int a) { return *this + Rational(a); }
Rational Rational::operator-(int a) { return *this - Rational(a); }
Rational Rational::operator*(int a) { return *this * Rational(a); }
Rational Rational::operator/(int a) { return *this / Rational(a); }

Rational& Rational::operator+=(int a) { return *this += Rational(a); }
Rational& Rational::operator-=(int a) { return *this -= Rational(a); }
Rational& Rational::operator*=(int a) { return *this *= Rational(a); }
Rational& Rational::operator/=(int a) { return *this /= Rational(a); }

Rational operator+(int lhs, const Rational& rhs) { return Rational(lhs) + rhs; }
Rational operator-(int lhs, const Rational& rhs) { return Rational(lhs) - rhs; }
Rational operator*(int lhs, const Rational& rhs) { return Rational(lhs) * rhs; }
Rational operator/(int lhs, const Rational& rhs) { return Rational(lhs) / rhs; }

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