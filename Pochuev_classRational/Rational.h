#pragma once
#include<string>
#include<iostream>

class Rational {
	int num, den;
	void Normalise();
public:
	static int gcd(int a, int b) {
		if (b > a) std::swap(a, b);
		return b ? gcd(b, a % b) : a;
	}

	double asDouble() const{
		return double(num / den);
	}

	//конструктор
	Rational(int pNum = 0, int pDen = 1) :
		num{ pNum },
		den{ pDen }
	{
		if (den == 0)
			throw std::exception("Деление на ноль");
		Normalise();
	}

	//конструктор с double
	Rational(double pNum, double pDen = 1) : Rational(int(pNum * 100000), int(pDen * 100000)) {};

	//конструктор копий
	Rational(const Rational&);

	//конструктор перемещения
	Rational(Rational&& rTemp) :num{ rTemp.num }, den{ rTemp.den }{
		rTemp.num = 0;
		rTemp.den = 0;
	};

	std::string asString() const{
		return std::to_string(num) + "/" + std::to_string(den);
	}

	int GetNum()const {
		return num; 
	}

	int GetDen()const {
		return den;
	}

	friend std::ostream& operator << (std::ostream&,const Rational&);
	friend std::istream& operator >> (std::istream&, Rational&);

	Rational& operator =(const Rational&);
	Rational& operator =(Rational&&);

	Rational operator+(const Rational&)const;
	Rational& operator+=(const Rational&);
	Rational operator-(const Rational&)const;
	Rational& operator-=(const Rational&);
	Rational operator*(const Rational&)const;
	Rational& operator*=(const Rational&);
	Rational operator/(const Rational&)const;
	Rational& operator /=(const Rational&);
	
	Rational& operator ++();
	Rational& operator ++(int);
	Rational& operator --();
	Rational& operator --(int);

	bool operator ==(const Rational&)const;
	bool operator !=(const Rational&)const;
	bool operator >(const Rational&)const;
	bool operator <(const Rational&)const;
	bool operator >=(const Rational&)const;
	bool operator <=(const Rational&)const;

	bool operator ==(const double&)const;
	bool operator !=(const double&)const;
	bool operator >(const double&)const;
	bool operator <(const double&)const;
	bool operator <=(const double&)const;
	bool operator >=(const double&)const;

	friend bool operator>(const double& lhs, const Rational& rhs);
	friend bool operator<(const double& lhs, const Rational& rhs);
	friend bool operator>=(const double& lhs, const Rational& rhs);
	friend bool operator<=(const double& lhs, const Rational& rhs);
	friend bool operator==(const double& lhs, const Rational& rhs);
	friend bool operator!=(const double& lhs, const Rational& rhs);

	template<class t>
	friend inline Rational operator+(const t& lhs, const Rational& rhs) {
		return (typeid(lhs) == typeid(1.1) or typeid(lhs) == typeid(" ")) ? Rational(lhs * rhs.GetDen() + rhs.GetNum(), rhs.GetDen()):throw std::exception("i can't calculate this");
	};

	template<class t>
	friend inline Rational operator-(const t& lhs, const Rational& rhs) {
		return (typeid(lhs) == typeid(1.1) or typeid(lhs) == typeid(" ")) ? Rational(lhs * rhs.GetDen() - rhs.GetNum(), rhs.GetDen()): throw std::exception("i can't calculate this");
	};

	template<class t>
	friend inline Rational operator*(const t& lhs, const Rational& rhs) {
		return (typeid(lhs) == typeid(1.1) or typeid(lhs) == typeid(" ")) ? Rational(lhs * rhs.GetNum, rhs.GetDen()): throw std::exception("i can't calculate this");;
	};

	template<class t>
	friend inline Rational operator/(const t& lhs, const Rational& rhs) {
		return (typeid(lhs) == typeid(1.1) or typeid(lhs) == typeid(" ")) ? Rational(lhs * rhs.GetDen(), rhs.GetNum()): throw std::exception("i can't calculate this");
	};
};
