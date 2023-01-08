#include "rational.h"

//операторы сложения для рациональных чисел
Rational Rational::operator+(const Rational& rhs) const {
  int den = GetDen() * rhs.GetDen();
  int num = GetNum() * rhs.GetDen() + rhs.GetNum() * GetDen();
  return Rational(num, den);
}
Rational& Rational::operator+=(const Rational& rhs) {
  return *this = *this + rhs;
}
Rational Rational::operator++(int) {
  Rational tmp(*this);
  *this += Rational(1);
  return tmp;
}
Rational& Rational::operator++() {
  Rational tmp(*this);
  tmp += Rational(1);
  return tmp;
}

//операторы разности для рацоинальных чисел
Rational Rational::operator-(const Rational& rhs) const {
  int den = GetDen() * rhs.GetDen();
  int num = GetNum() * rhs.GetDen() - rhs.GetNum() * GetDen();
  return Rational(num, den);
}
Rational& Rational::operator-=(const Rational& rhs) {
    return *this = *this - rhs;
}
Rational Rational::operator--(int) {
    Rational tmp(*this);
    *this -= Rational(1);
    return tmp;
}
Rational& Rational::operator--() {
    Rational tmp(*this);
    tmp -= Rational(1);
    return tmp;
}

//операторы умножения
Rational Rational::operator*(const Rational& rhs) const {
  int den = GetDen() * rhs.GetDen();
  int num = GetNum() * rhs.GetNum();
  return Rational(num, den);
}
Rational& Rational::operator*=(const Rational& rhs) {
    return *this = *this * rhs;
}

//операторы деления
Rational Rational::operator/(const Rational& rhs) const {
  int den = GetDen() * rhs.GetNum();
  int num = GetNum() * rhs.GetDen();
  return Rational(num, den);
}
Rational& Rational::operator/=(const Rational& rhs) {
  return *this = *this / rhs;
}

//оператор присваивания
Rational& Rational::operator=(const Rational& rhs) {
    num_ = rhs.GetNum();
    den_ = rhs.GetDen();
    return *this;
}

//оператор равенства
bool Rational::operator==(const Rational& rhs) const {
  if ((GetDen() == rhs.GetDen()) && (GetNum() == rhs.GetNum())) {
    return true;
  }
  return false;
}

//оператор неравенства
bool Rational::operator!=(const Rational& rhs) const {
  if ((GetDen() != rhs.GetDen()) || (GetNum() != rhs.GetNum())) {
    return true;
  }
  return false;
}

//операторы сравнения
bool Rational::operator>(const Rational& rhs) const {
    Rational tmp(*this);
    return (tmp - rhs).GetNum() > 0;
}
bool Rational::operator<(const Rational& rhs) const {
    Rational tmp(*this);
    return (tmp - rhs).GetNum() < 0;
}
bool Rational::operator>=(const Rational& rhs) const {
    Rational tmp(*this);
    return (tmp - rhs).GetNum() >= 0;
}
bool Rational::operator<=(const Rational& rhs) const {
    Rational tmp(*this);
    return (tmp - rhs).GetNum() <= 0;
}

//оператор вывода
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

//сокращение дроби
void Rational::Normalize() {
  int g = Gcd(std::abs(num_), std::abs(den_));
  num_ /= g;
  den_ /= g;
}

//получение НОДа
int Rational::Gcd(int a, int b) const {
  return (b == 0) ? a : Gcd(b, a % b);
}

//представление числа в виде дроби
std::string Rational::AsString() const {
  return std::to_string(num_) + "/" + std::to_string(den_); 
}