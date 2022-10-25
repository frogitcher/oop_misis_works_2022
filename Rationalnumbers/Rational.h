#pragma once
#include<iostream>
#include<string>
#include<cmath>
#include<numeric>
#include<stdexcept>

class Rational {
private:
	int num_;
	int den_;
	int gcd(int a, int b) const { return (b == 0) ? a : gcd(b, a % b); }
	void Normalize();
public:
	std::string AsString() const { return std::to_string(num_) + "/" + std::to_string(den_); }
	Rational(int num = 0, int den = 1);
	Rational(const Rational& other);
	~Rational() = default;
	int GetNum() const { return num_; };
	int GetDen() const { return den_; };

	Rational operator+(const Rational& rhs) const;
	Rational operator-(const Rational& rhs) const;
	Rational operator*(const Rational& rhs) const;
	Rational operator/(const Rational& rhs) const;

	Rational& operator+=(const Rational& rhs);
	Rational& operator-=(const Rational& rhs);
	Rational& operator*=(const Rational& rhs);
	Rational& operator/=(const Rational& rhs);
	
	Rational operator-() const;
	Rational operator+() const;

	Rational operator++();
	Rational operator++(int);
	Rational operator--();
	Rational operator--(int);

	bool operator==(const Rational& rhs) const;
	bool operator!=(const Rational& rhs) const;
	bool operator>(const Rational& rhs) const;
	bool operator<(const Rational& rhs) const;
	bool operator>=(const Rational& rhs) const;
	bool operator<=(const Rational& rhs) const;

	Rational& operator=(const Rational& rhs);

	Rational operator+(int rhs) const;
	Rational operator-(int rhs) const;
	Rational operator*(int rhs) const;
	Rational operator/(int rhs) const;
	Rational& operator+=(int rhs);
	Rational& operator-=(int rhs);
	Rational& operator*=(int rhs);
	Rational& operator/=(int rhs);
};

std::ostream& operator<<(std::ostream& ostr, const Rational& r);
std::istream& operator>>(std::istream& istr, Rational& r);

