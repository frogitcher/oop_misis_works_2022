#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <numeric>
#include <stdexcept>

class Rational {
public:
  std::string AsString() const { return std::to_string(num_) + '/' + std::to_string(den_); }
  Rational(int num = 0, int den = 1);
  Rational(const Rational& other);
  int GetNum() const { return num_; }
  int GetDen() const { return den_; }

  Rational& operator=(const Rational& rhs) const;

  Rational operator+(const Rational& rhs) const;
  Rational& operator+=(const Rational& rhs);
  Rational operator-(const Rational& rhs) const;
  Rational& operator-=(const Rational& rhs);
  Rational operator*(const Rational& rhs) const;
  Rational& operator*=(const Rational& rhs);
  Rational operator/(const Rational& rhs) const;
  Rational& operator=(const Rational& rhs);
  Rational& operator/=(const Rational& rhs);

  Rational operator+(int rhs) const;
  Rational& operator+=(int rhs);
  Rational operator-(int rhs) const;
  Rational& operator-=(int rhs);
  Rational operator*(int rhs) const;
  Rational& operator*=(int rhs);
  Rational operator/(int rhs) const;
  Rational& operator/=(int rhs);

  Rational operator-() const;
  Rational operator+() const;

  Rational operator++(int);
  Rational& operator++();
  Rational operator--(int);
  Rational& operator--();
  
  bool operator==(const Rational& rhs) const;
  bool operator!=(const Rational& rhs) const;
  bool operator<(const Rational& rhs) const;
  bool operator>(const Rational& rhs) const;
  bool operator>=(const Rational& rhs) const;
  bool operator<=(const Rational& rhs) const;
  

private:
  int gcd(int a, int b) const { return (b == 0) ? a : gcd(b, a % b); }
  void Normalize();
  int num_; //numerator
  int den_; //denominator
  };

Rational operator+(int lhs, const Rational& rhs); 
Rational operator-(int lhs, const Rational& rhs); 
Rational operator*(int lhs, const Rational& rhs);
Rational operator/(int lhs, const Rational& rhs);

std::ostream& operator<<(std::ostream& ostr, const Rational& r);
std::istream& operator>>(std::istream& istr, Rational& r);