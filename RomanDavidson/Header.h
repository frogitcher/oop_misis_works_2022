#pragma once
#include <iostream>
#include<string>
#include<stdexcept>
#include<numeric>
#include<cmath>


class Rational {
public:
    std::string AsString() const { return std::to_string(num_) + '/' + std::to_string(den_); }
    Rational(int num = 0, int den = 1) : num_{ num }, den_{ den } {
        if (den_ == 0) {
            throw "Denominator can`t be zero";
        }
        Normalize();
    }
    int GetNum() const { return num_; }
    int GetDen() const { return den_; }

    Rational operator+(const Rational& rhs) const {
        int den = GetDen() * rhs.GetDen();
        int num = GetNum() * rhs.GetDen() + rhs.GetNum() * GetDen();
        return Rational(num, den);
    }
    Rational operator-(const Rational& rhs) const {
        int den = GetDen() * rhs.GetDen();
        int num = GetNum() * rhs.GetDen() - rhs.GetNum() * GetDen();
        return Rational(num, den);
    }
    Rational operator*(const Rational& rhs) const {
        int den = GetDen() * rhs.GetDen();
        int num = GetNum() * rhs.GetNum();
        return Rational(num, den);
    }
    Rational operator/(const Rational& rhs) const {
        int den = GetDen() * rhs.GetNum();
        int num = GetNum() * rhs.GetDen();
        return Rational(num, den);
    }
    void operator+=(const Rational& rhs) {
        *this = *this + rhs;
    }

    bool operator==(const Rational& rhs) const {
        return ((GetDen() == rhs.GetDen()) && (GetNum() == rhs.GetNum()));
    }

    bool operator!=(const Rational& rhs) const {
        return(!((GetDen() == rhs.GetDen()) && (GetNum() == rhs.GetNum())));
    }
    bool operator<(const Rational& rhs) const {
        return (GetNum() * rhs.GetDen() - rhs.GetNum() * GetDen() < 0);
    }
    bool operator>(const Rational& rhs) const {
        return (GetNum() * rhs.GetDen() - rhs.GetNum() * GetDen() > 0);
    }
    bool operator<=(const Rational& rhs) const {
        return (GetNum() * rhs.GetDen() - rhs.GetNum() * GetDen() <= 0);
    }
    bool operator>=(const Rational& rhs) const {
        return (GetNum() * rhs.GetDen() - rhs.GetNum() * GetDen() >= 0);
    }

private:
    int num_;
    int den_;
    int gcd(int a, int b) const {
        return (b == 0) ? a : gcd(b, a % b);
    }
    void Normalize() {
        int g = gcd(std::abs(num_), std::abs(den_));
        num_ /= g;
        den_ /= g;
    }
};
inline Rational maxr(const Rational x, const Rational y) {
    if (x >= y) {return x;}
    else
    {
        return y;
    }
}
//Rational maxr(const Rational x, const Rational y);
Rational minr(const Rational x, const Rational y);
Rational read();

std::istream& operator>>(std::istream& a, Rational& r);


