#include <iostream>

class IntRingMod {
private:
    int _num;
    int _X;
public:
    IntRingMod(int num = 0, int X = 1) {
        _X = X;
        _num = (num % X + X) % X;
    }

    ~IntRingMod() {}

    int GetValue() {
        return _num;
    }

    IntRingMod& operator=(IntRingMod const& rhs) {
        _X = rhs._X;
        _num = rhs._num;
        return *this;
    }

    IntRingMod operator+(IntRingMod const& rhs) {
        if (_X != rhs._X) {
            throw "Error";
        }
        else {
            IntRingMod temp{ _num + rhs._num, _X };
            return temp;
        }
    }

    IntRingMod operator-(IntRingMod const& rhs) {
        if (_X != rhs._X) {
            throw "Error";
        }
        else {
            IntRingMod temp{ _num - rhs._num, _X };
            return temp;
        }
    }

    IntRingMod operator*(IntRingMod const& rhs) {
        if (_X != rhs._X) {
            throw "Error";
        }
        else {
            IntRingMod temp{ _num * rhs._num, _X };
            return temp;
        }
    }
};

int main() {
    IntRingMod a{ 2, 5 };
    IntRingMod b{ 3, 5 };
    IntRingMod c{ 4, 5 };
    std::cout << "2 + 4 = " << (a + c).GetValue() << '\n';
    std::cout << "2 - 3 = " << (a - b).GetValue() << '\n';
    std::cout << "4 * 3 = " << (c * b).GetValue() << std::endl;
}