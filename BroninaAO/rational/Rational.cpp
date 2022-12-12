#include "Rational.h"

void Rational::Normalize() {
  int g = gcd(std::abs(num_), std::abs(den_));
  num_ /= g;
  den_ /= g;
}

Rational Rational::operator+(const Rational& rhs) const {
  int den_ = Getden() * rhs.Getden();
  int num_ = Getnum() * rhs.Getden() + rhs.Getnum() * Getden();
  return Rational(num_, den_);
}

Rational Rational::operator-(const Rational& rhs) const {
  int den_ = Getden() * rhs.Getden();
  int num_ = Getnum() * rhs.Getden() - rhs.Getnum() * Getden();
  return Rational(num_, den_);
}

Rational Rational::operator*(const Rational& rhs) const {
  int den_ = Getden() * rhs.Getden();
  int num_ = Getnum() * rhs.Getnum();
  return Rational(num_, den_);
}

Rational Rational::operator/(const Rational& rhs) const {
  int den_ = Getden() * rhs.Getnum();
  int num_ = Getnum() * rhs.Getden();
  return Rational(num_, den_);
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

Rational Rational::operator-() const{
  return { -this->Getnum(), this->Getden() };
}

Rational Rational::operator+() const {
  return { this->Getnum(), this->Getden() };
}

Rational Rational::operator++(int) {
  Rational tmp(*this);
  *this += Rational(1);
  return tmp;
}
Rational& Rational::operator++() {
  return *this += Rational(1);
}

Rational Rational::operator--(int) {
  Rational tmp(*this);
  *this += Rational(1);
  return tmp;
}
Rational& Rational::operator--() {
  return *this += Rational(1);
}

bool Rational::operator==(const Rational& rhs) {
  return Getnum() == rhs.Getnum() && Getden() == rhs.Getden();
}
bool Rational::operator!=(const Rational& rhs) {
  return !(*this == rhs);
}
bool Rational::operator>(const Rational& rhs) {
  return Getnum() * rhs.Getden() > rhs.Getnum() * Getden();
}
bool Rational::operator>=(const Rational& rhs) {
  return !(*this < rhs);
}
bool Rational::operator<(const Rational& rhs) {
  return Getnum() * rhs.Getden()  < rhs.Getnum() * Getden();
}
bool Rational::operator<=(const Rational& rhs) {
  return !(*this > rhs);
}

Rational Rational::operator+(int rhs) const {
  return Rational(*this + Rational(rhs));
}

Rational Rational::operator-(int rhs) const {
  return Rational(*this - Rational(rhs));
}

Rational Rational::operator*(int rhs) const {
  return Rational(*this * Rational(rhs));
}
Rational Rational::operator/(int rhs) const {
  return Rational(*this / Rational(rhs));
}

Rational operator+(int lhs, const Rational& rhs) {
  return Rational(Rational(lhs) + rhs);
}
Rational operator-(int lhs, const Rational& rhs) {
  return Rational(Rational(lhs) - rhs);
}
Rational operator*(int lhs, const Rational& rhs) {
  return Rational(Rational(lhs) * rhs);
}
Rational operator/(int lhs, const Rational& rhs) {
  return Rational(Rational(lhs) / rhs);
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
Rational::Rational(int num, int den)
  : num_{ num }
    , den_{ den } {
    if (den_ == 0) throw "Denumenator can't be zero";
    Normalize();
  }

Rational::Rational(const Rational& other) {
  num_ = other.Getnum();
  den_ = other.Getden();
}

Rational& Rational::operator+=(int rhs) {
  return *this = *this + Rational(rhs);
}
Rational& Rational::operator-=(int rhs) {
  return *this = *this - Rational(rhs);
}
Rational& Rational::operator*=(int rhs) {
  return *this = *this * Rational(rhs);
}
Rational& Rational::operator/=(int rhs) {
  return *this = *this / Rational(rhs);
}