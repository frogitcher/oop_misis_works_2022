//
// Created by Максим Афанасьев on 18.10.2022.
//
#include "rational.h"
#include <iostream>
#include <cmath>

RationalNumber::RationalNumber(long long int num, long long int den) {
    Update(num, den);
}

RationalNumber RationalNumber::operator+(const RationalNumber &other) const {
    return RationalNumber {num_ * other.den_ + other.num_ * den_, other.den_ * den_};
}

RationalNumber RationalNumber::operator-(const RationalNumber &other) const {
    return RationalNumber {num_ * other.den_ - other.num_ * den_, den_ * other.den_};
}

RationalNumber RationalNumber::operator/(const RationalNumber &other) const {
    return RationalNumber {num_ * other.den_, den_ * other.num_};
}

RationalNumber RationalNumber::operator*(const RationalNumber &other) const {
    return RationalNumber {num_ * other.num_, den_ * other.den_};
}

long long RationalNumber::GetNominator() const {
    return num_;
}

long long RationalNumber::GetDenominator() const {
    return den_;
}

void RationalNumber::Normalize() {
    if (num_ == 0) {
        den_ = 1;
    }
    else {
        long long g = gcd(num_, den_);
        long long sign = (num_ / abs(num_)) * (den_ / abs(den_));
        num_ = sign * abs(num_ / g);
        den_ = abs(den_ / g);
    }
}

std::ostream &operator<<(std::ostream &o, const RationalNumber &other) {
    o << other.num_;
    if (other.den_ != 1) {
        o << '/' << other.den_;
    }
    return o;
}

std::istream &operator>>(std::istream &i, RationalNumber &other) {
    std::string val;
    i >> val;
    int pos = val.find('/');
    long long num, den;
    if (pos == -1) {
        int pos_dot = val.find('.');
        if (pos_dot == -1) {
            pos_dot = val.find(',');
        }

        if (pos_dot == -1) {
            for (char& it : val) {
                if (!(std::isdigit(it) || it == '-')) {
                    throw std::invalid_argument("not a number!");
                }
            }
            num = std::stoll(val);
            den = 1;
        }
        else {
            long long part_int = std::stoll(val.substr(0, pos_dot));
            std::string part_dec_str = val.substr(pos_dot + 1, val.length() - pos_dot - 1);
            long long part_dec = std::stoll(part_dec_str);
            den = (long long) std::pow(10, part_dec_str.length());
            num = part_int * den + part_dec;
        }
    }
    else {
        num = std::stoll(val.substr(0, pos));
        den = std::stoll(val.substr(pos + 1, val.length() - pos - 1));
    }
    other.Update(num, den);
    return i;
}

void RationalNumber::Update(long long int num, long long int den) {
    if (den == 0) {
        throw std::invalid_argument("denominator is zero!");
    }
    num_ = num;
    den_ = den;
    Normalize();
}

bool RationalNumber::operator==(const RationalNumber &other) const {
    return num_ == other.num_ && den_ == other.den_;
}

bool RationalNumber::operator!=(const RationalNumber &other) const {
    return !(*this == other);
}

bool RationalNumber::operator<(const RationalNumber &other) const {
    return num_ * other.den_ < other.num_ * den_;
}

bool RationalNumber::operator>(const RationalNumber &other) const {
    return num_ * other.den_ > other.num_ * den_;
}

bool RationalNumber::operator<=(const RationalNumber &other) const {
    return (*this < other) || (*this == other);
}

bool RationalNumber::operator>=(const RationalNumber &other) const {
    return (*this > other) || (*this == other);
}

RationalNumber RationalNumber::operator+=(const RationalNumber &other) {
    *this = *this + other;
    return *this;
}

RationalNumber RationalNumber::operator-=(const RationalNumber &other) {
    *this = *this - other;
    return *this;
}

RationalNumber RationalNumber::operator*=(const RationalNumber &other) {
    *this = *this * other;
    return *this;
}

RationalNumber RationalNumber::operator/=(const RationalNumber &other) {
    *this = *this / other;
    return *this;
}

bool RationalNumber::operator==(const long long int other) const {
    return *this == RationalNumber(other);
}

bool RationalNumber::operator!=(long long int other) const {
    return *this != RationalNumber(other);
}

long long gcd(long long a, long long b) {
    a = abs(a);
    b = abs(b);
    if (b > a) {
        std::swap(a, b);
    }
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return abs(a * b) / gcd(a, b);
}