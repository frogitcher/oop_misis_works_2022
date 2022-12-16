#include <string>
#include <iostream>
#include <stdexcept>
#pragma once

class Rational {
public:
    Rational(int num = 0, int den = 1);
    Rational(const Rational& other);
    std::string AsString() const { return std::to_string(num_) + "/" + std::to_string(den_); }
    int GetNum() const { return num_; }
    int GetDen() const { return den_; }

    Rational operator+(const Rational& rhs) const;
    Rational operator-(const Rational& rhs) const;
    Rational operator*(const Rational& rhs) const;
    Rational operator/(const Rational& rhs) const;

    Rational& operator+=(const Rational& rhs);
    Rational& operator-=(const Rational& rhs);
    Rational& operator*=(const Rational& rhs);
    Rational& operator/=(const Rational& rhs);
    Rational& operator=(const Rational& rhs);

    Rational operator+();
    Rational operator-();

    Rational operator++(int);
    Rational& operator++();
    Rational operator--(int);
    Rational& operator--();

    bool operator==(const Rational& rhs);
    bool operator!=(const Rational& rhs);

    bool operator>=(const Rational& rhs);
    bool operator<=(const Rational& rhs);
    bool operator>(const Rational& rhs);
    bool operator<(const Rational& rhs);

    Rational operator+(int a);
    Rational operator-(int a);
    Rational operator*(int a);
    Rational operator/(int a);

    Rational& operator+=(int a);
    Rational& operator-=(int a);
    Rational& operator*=(int a);
    Rational& operator/=(int a);

    friend std::ostream& operator<<(std::ostream& ostr, const Rational& rhs);
    friend std::istream& operator>>(std::istream& ostr, Rational& rhs);
private:
    int num_, den_;
    int gcd(int a, int b) const {
        if (b > a) std::swap(a, b);
        return b ? gcd(b, a % b) : a;
    }
    void normalise();
};
Rational operator+(int lhs, const Rational& rhs);
Rational operator-(int lhs, const Rational& rhs);
Rational operator*(int lhs, const Rational& rhs);
Rational operator/(int lhs, const Rational& rhs);