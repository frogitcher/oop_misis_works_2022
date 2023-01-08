#ifndef RAT_12_29
#define RAT_12_29

#include <exception>
#include <numeric> // where is gcd???
#include <iostream>

#include "Rational.h"

Rational::Rational(int num, int den) {
  if (den == 0)
    throw std::runtime_error("Den cannot be 0");

  int gcd = std::gcd(num, den);
  this->num = num / gcd;
  this->den = den / gcd;
}

Rational::Rational(int x) {
  Rational(x, 1);
}

Rational::Rational() {
  Rational(0);
}

Rational  Rational::FlipNumber() const {
  if (num == 0)
    throw std::runtime_error("Cannot flip 0"); 

  return Rational(den, num);
}

Rational Rational::operator+(const Rational& that) const {
  int lcm_dens = den * that.den / std::gcd(den, that.den);

  int num_1 = num * lcm_dens / den;
  int num_2 = that.num * lcm_dens / that.den;

  int res_num = num_1 + num_2;
  int res_den = lcm_dens;
  
  return Rational(res_num, res_den);
}

Rational Rational::operator-(const Rational& that) const {
  int lcm_dens = den * that.den / std::gcd(den, that.den);

  int num_1 = num * lcm_dens / den;
  int num_2 = that.num * lcm_dens / that.den;

  int res_num = num_1 - num_2;
  int res_den = lcm_dens;
  
  return Rational(res_num, res_den);  
}

Rational Rational::operator*(const Rational& that) const {
  int res_num = num * that.num;
  int res_den = den * that.den;

  return Rational(res_num, res_den);
} 


Rational Rational::operator/(const Rational& that) const {
  return (*this) * that.FlipNumber();
}

std::ostream& operator<<(std::ostream& out, const Rational& rat) {
  return (out << rat.num << "/" << rat.den);
}

std::istream& operator>>(std::istream& in, Rational& rat) {
  in >> rat.num >> rat.den;
  return in;
}

#endif
