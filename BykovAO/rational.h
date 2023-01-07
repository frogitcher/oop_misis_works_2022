#pragma once
#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>

//����� ������������ �����
struct Rational {

private:
  int num_; //���������
  int den_; //�����������

  //��������� ����
  int Gcd(int a, int b) const;

  //���������� �����
  void Normalize();

public:
  //����������� ������
  Rational(int num = 0, int den = 1)
    : num_{ num }
    , den_{ den } {
    Normalize();
  }

  //����������
  ~Rational() = default;

  //��������� �������� ��� ������������ �����
  Rational operator+(const Rational& rhs) const;
  Rational& operator+=(const Rational& rhs);
  Rational operator++(int);
  Rational& operator++();

  //��������� �������� ��� ������������ �����
  Rational operator-(const Rational& rhs) const;
  Rational& operator-=(const Rational& rhs);
  Rational operator--(int);
  Rational& operator--(); 

  //��������� ���������
  Rational operator*(const Rational& rhs) const;
  Rational& operator*=(const Rational& rhs);
  

  //��������� �������
  Rational operator/(const Rational& rhs) const;
  Rational& operator/=(const Rational& rhs);

  //�������� ������������
  Rational& operator=(const Rational& rhs);

  //�������� ���������
  bool operator==(const Rational& rhs) const;

  //�������� �����������
  bool operator!=(const Rational& rhs) const;

  //��������� ���������
  bool operator>(const Rational& rhs) const;
  bool operator<(const Rational& rhs) const;
  bool operator>=(const Rational& rhs) const;
  bool operator<=(const Rational& rhs) const;

  //������������� ����� � ���� �����
  std::string AsString() const;

  //��������� �������� ��������� � ����������� ��� ���������
  int GetNum() const { return num_; }
  int GetDen() const { return den_; }

};

std::ostream& operator<<(std::ostream& ostr, const Rational& r);
std::istream& operator>>(std::istream& istr, const Rational& r);

