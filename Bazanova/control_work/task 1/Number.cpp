#include "Number.h"


Number::Number(int num, int x) {
    num_ = num;
    x_ = x;
    a_ = (num_ % x_ + x_) % x_;
}
Number::Number(const Number& other) {
    num_ = other.GetNum();
    x_ = other.GetX();
    a_ = (num_ % x_ + x_) % x_;
}


Number Number::operator-(const Number& rhs) const {
    int x = GetX();
    int num = ((GetNum() - rhs.GetNum()) % x + x) % x;
    return Number(num, x);
}
Number Number::operator*(const Number& rhs) const {
    int x = GetX();
    int num = ((GetNum() * rhs.GetNum()) % x + x) % x;
    return Number(num, x);
}

Number Number::operator+(const Number& rhs) const {
    int x = GetX();
    int num = ((GetNum() + rhs.GetNum()) % x + x) % x;
    return Number(num, x);
}

Number Number::operator=(const Number& rhs) {
    num_ = rhs.GetNum();
    x_ = rhs.GetX();
    return *this;
}

