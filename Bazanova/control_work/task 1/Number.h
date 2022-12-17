#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <numeric>
#include <stdexcept>

class Number {
public:
    std::string AsString() const { return std::to_string(a_) ;}
    Number(int num = 0, int x = 1);
    Number(const Number& other);
    int GetX() const { return x_; }
    int GetNum() const { return num_; }
    int GetValue() const { return a_; }

    Number operator=(const Number& rhs);
    Number operator+(const Number& rhs) const;
    Number operator-(const Number& rhs) const;
    Number operator*(const Number& rhs) const;



private:
    int num_; //numerator
    int x_; //x
    int a_; // получившееся число по модулю x
};


std::ostream& operator<<(std::ostream& ostr, const Number& r);
std::istream& operator>>(std::istream& istr, Number& r);

