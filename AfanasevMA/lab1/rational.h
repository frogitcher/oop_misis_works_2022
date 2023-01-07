//
// Created by Максим Афанасьев on 18.10.2022.
//

#ifndef UNI_RATIONAL_H
#define UNI_RATIONAL_H

#include <ostream>

class RationalNumber {
public:
    explicit RationalNumber(long long num = 0, long long den = 1);

    RationalNumber operator+(const RationalNumber& other) const;
    RationalNumber operator-(const RationalNumber& other) const;
    RationalNumber operator/(const RationalNumber& other) const;
    RationalNumber operator*(const RationalNumber& other) const;

    RationalNumber operator+=(const RationalNumber& other);
    RationalNumber operator-=(const RationalNumber& other);
    RationalNumber operator*=(const RationalNumber& other);
    RationalNumber operator/=(const RationalNumber& other);

    bool operator==(long long other) const;
    bool operator==(const RationalNumber& other) const;
    bool operator!=(long long other) const;
    bool operator!=(const RationalNumber& other) const;
    bool operator<(const RationalNumber& other) const;
    bool operator>(const RationalNumber& other) const;
    bool operator<=(const RationalNumber& other) const;
    bool operator>=(const RationalNumber& other) const;

    long long GetNominator() const;

    long long GetDenominator() const;

    friend std::ostream& operator<< (std::ostream& o, const RationalNumber& other);

    friend std::istream& operator>> (std::istream& i, RationalNumber& other);

private:
    void Normalize();
    void Update(long long num, long long den);
    long long num_ = 0;
    long long den_ = 0;
};

long long gcd(long long a, long long b);
long long lcm(long long a, long long b);

#endif //UNI_RATIONAL_H
