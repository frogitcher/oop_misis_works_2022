#include <string>
#include <iostream>
#include <stdexcept>

class MyInt {
public:
    MyInt(int num = 0, int div = 1) {
        this->div_ = div;
        this->num_ = (num % div + div) % div;
    };

    MyInt(const MyInt &other) {
        this->div_ = other.getValue();
        this->num_ = other.getDiv();
    };

    ~MyInt() = default;

    int getValue() const { return num_; }

    int getDiv() const { return div_; }


    MyInt operator+(const MyInt &rhs) const {
        if (getDiv() != rhs.getDiv()) {
            throw "Divs are different";
        }
        return MyInt(getValue() + rhs.getValue(), rhs.getDiv());
    }

    MyInt operator-(const MyInt &rhs) const {
        if (getDiv() != rhs.getDiv()) {
            throw "Divs are different";
        }
        return MyInt(getValue() - rhs.getValue(), rhs.getDiv());
    };

    MyInt operator*(const MyInt &rhs) const {
        if (getDiv() != rhs.getDiv()) {
            throw "Divs are different";
        }
        return MyInt(getValue() * rhs.getValue(), rhs.getDiv());
    };

    MyInt& operator=(const MyInt &rhs) {
        num_ = rhs.getValue();
        div_ = rhs.getDiv();
        return *this;
    };

    friend std::ostream &operator<<(std::ostream &basicOstream, const MyInt &rhs) {
        return basicOstream << "X: " << rhs.num_;
    };

    friend std::istream &operator>>(std::istream &basicIstream, MyInt &rhs) {
        int a, x;
        char c;
        std::cout << "Enter Num: ";
        basicIstream >> a;
        std::cout << "Enter Div: ";
        basicIstream >> x;
        rhs = MyInt(a, x);
        return basicIstream;
    };

private:
    int num_, div_;
};


int main() {
    MyInt a, b;
    std::cout << a << std::endl; // 0
    std::cin >> a;
    std::cout << a << std::endl;
    a = MyInt(2, 5);
    b = MyInt(4, 5);
    std::cout << a + b << std::endl; // 1
    std::cout << a - b << std::endl; // 3
    std::cout << a * b << std::endl; // 1
    a = b;
    std::cout << a << std::endl; // 4
    std::cout << a.getValue() << std::endl; // 4
}