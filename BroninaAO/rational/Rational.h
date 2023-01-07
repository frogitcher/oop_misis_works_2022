#pragma once
#include <iostream>
#include <string>
#include <stdexcept>

class Rational {
public:
  std::string AsString() const {
    return std::to_string(num_) + '/' + std::to_string(den_);
  }
  Rational(int num = 0, int den = 1);
  Rational(const Rational& lhs);
  ~Rational() = default;
  int Getnum() const { return num_; }
  int Getden() const { return den_; }

  Rational operator+(const Rational& rhs) const;
  Rational operator-(const Rational& rhs) const;
  Rational operator*(const Rational& rhs) const;
  Rational operator/(const Rational& rhs) const;

  Rational& operator+=(const Rational& rhs);
  Rational& operator-=(const Rational& rhs);
  Rational& operator*=(const Rational& rhs);
  Rational& operator/=(const Rational& rhs);

  Rational& operator+=(int a);
  Rational& operator-=(int a);
  Rational& operator*=(int a);
  Rational& operator/=(int a);

  Rational operator-() const;
  Rational operator+() const;

  Rational operator++(int);
  Rational& operator++();
  Rational operator--(int);
  Rational& operator--();

  bool operator==(const Rational& rhs);
  bool operator!=(const Rational& rhs);
  bool operator>(const Rational& rhs);
  bool operator>=(const Rational& rhs);
  bool operator<(const Rational& rhs);
  bool operator<=(const Rational& rhs);

  Rational operator+(int rhs) const;
  Rational operator-(int rhs) const;
  Rational operator*(int rhs) const;
  Rational operator/(int rhs) const;

  friend std::ostream& operator<<(std::ostream& ostr, const Rational& r);
  friend std::istream& operator>>(std::istream& istr, Rational& r);

  int gcd(int a, int b) const {
    return (b == 0) ? a : gcd(b, a % b);
  }
private:
  void Normalize();
  int num_, den_;
};

Rational operator+(int lhs, const Rational& rhs);
Rational operator-(int lhs, const Rational& rhs);
Rational operator*(int lhs, const Rational& rhs);
Rational operator/(int lhs, const Rational& rhs);
