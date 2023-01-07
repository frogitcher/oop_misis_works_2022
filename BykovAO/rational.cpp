#include "rational.h"

//��������� �������� ��� ������������ �����
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

//��������� �������� ��� ������������ �����
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

//��������� ���������
Rational Rational::operator*(const Rational& rhs) const {
  int den = GetDen() * rhs.GetDen();
  int num = GetNum() * rhs.GetNum();
  return Rational(num, den);
}
Rational& Rational::operator*=(const Rational& rhs) {
    return *this = *this * rhs;
}

//��������� �������
Rational Rational::operator/(const Rational& rhs) const {
  int den = GetDen() * rhs.GetNum();
  int num = GetNum() * rhs.GetDen();
  return Rational(num, den);
}
Rational& Rational::operator/=(const Rational& rhs) {
  return *this = *this / rhs;
}

//�������� ������������
Rational& Rational::operator=(const Rational& rhs) {
    num_ = rhs.GetNum();
    den_ = rhs.GetDen();
    return *this;
}

//�������� ���������
bool Rational::operator==(const Rational& rhs) const {
  if ((GetDen() == rhs.GetDen()) && (GetNum() == rhs.GetNum())) {
    return true;
  }
  return false;
}

//�������� �����������
bool Rational::operator!=(const Rational& rhs) const {
  if ((GetDen() != rhs.GetDen()) || (GetNum() != rhs.GetNum())) {
    return true;
  }
  return false;
}

//��������� ���������
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

//�������� ������
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

//���������� �����
void Rational::Normalize() {
  int g = Gcd(std::abs(num_), std::abs(den_));
  num_ /= g;
  den_ /= g;
}

//��������� ����
int Rational::Gcd(int a, int b) const {
  return (b == 0) ? a : Gcd(b, a % b);
}

//������������� ����� � ���� �����
std::string Rational::AsString() const {
  return std::to_string(num_) + "/" + std::to_string(den_); 
}