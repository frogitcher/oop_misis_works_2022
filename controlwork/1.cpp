#include<iostream>

using namespace std;

class Ring {
private:
	int x_;
	int a_;
	void Normalize();
	void Normalize() {
		a_ = (a_ % x_ + x_) % x_;
	}
public:
	int GetValue() const { return x_; };
	Ring& operator+(const Ring& rhs) const {
		int a = GetValue() + rhs.GetValue();
		return Ring(a);
	}
	Ring& operator-(const Ring& rhs) const {
		int a = GetValue() - rhs.GetValue();
		return Ring(a);
	}
	Ring& operator*(const Ring& rhs) const {
		int a = GetValue() * rhs.GetValue();
		return Ring(a);
	}
	Ring& operator=(const Ring& rhs) {
		x_ = rhs.GetValue();
	}
};