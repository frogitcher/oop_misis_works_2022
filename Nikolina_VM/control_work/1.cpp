#include<iostream>

using namespace std;

class INTX {
private: 
	int a, int b, int x;
public:
	int operator+(int a, int b, int x) const{
		return ((a + b) % x + x) % x;
	}

	int operator-(int a, int b, int x) const{
		return ((a - b) % x + x) % x;
	}

	int operator*(int a, int b, int c) const{
		return ((a * b) % x + x) % x;
	}

	int operator=(int a, int x) {
		return (a % x + x) % x;
	}

}

int main() {
	int a, b, x;
	cin >> a;
	cin >> b; 
	cin >> x;
	cout << a + b;
	cout << a - b;
	cout << a * b;
}