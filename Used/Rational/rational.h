#pragma once
#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>

//класс рациональных чисел
struct Rational {

private:
  int num_; //числитель
  int den_; //знаменатель

  //получение НОДа
  int Gcd(int a, int b) const;

  //сокращение дроби
  void Normalize();

public:
  //конструктор класса
  Rational(int num = 0, int den = 1)
    : num_{ num }
    , den_{ den } {
    Normalize();
  }

  //деструктор
  ~Rational() = default;

  //операторы сложения для рациональных чисел
  Rational operator+(const Rational& rhs) const;
  Rational& operator+=(const Rational& rhs);
  Rational operator++(int);
  Rational& operator++();

  //операторы разности для рациональных чисел
  Rational operator-(const Rational& rhs) const;
  Rational& operator-=(const Rational& rhs);
  Rational operator--(int);
  Rational& operator--(); 

  //операторы умножения
  Rational operator*(const Rational& rhs) const;
  Rational& operator*=(const Rational& rhs);
  

  //операторы деления
  Rational operator/(const Rational& rhs) const;
  Rational& operator/=(const Rational& rhs);

  //оператор присваивания
  Rational& operator=(const Rational& rhs);

  //оператор равенства
  bool operator==(const Rational& rhs) const;

  //оператор неравенства
  bool operator!=(const Rational& rhs) const;

  //операторы сравнения
  bool operator>(const Rational& rhs) const;
  bool operator<(const Rational& rhs) const;
  bool operator>=(const Rational& rhs) const;
  bool operator<=(const Rational& rhs) const;

  //представление числа в виде дроби
  std::string AsString() const;

  //получение значений числителя и знаменателя вне структуры
  int GetNum() const { return num_; }
  int GetDen() const { return den_; }

};

std::ostream& operator<<(std::ostream& ostr, const Rational& r);
std::istream& operator>>(std::istream& istr, const Rational& r);

