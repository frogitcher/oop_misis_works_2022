#include <iostream>
#include <set>
class Celoe {
public:
    Celoe(int num = 0);
    Celoe(const Celoe& other);

    Celoe operator+(const Celoe& rhs) const;
    Celoe operator-(const Celoe& rhs) const;
    Celoe operator*(const Celoe& rhs) const;
    Celoe operator=(const Celoe& rhs) const;
    Celoe::Celoe(const Celoe& other) {
        num_ = other.GetNum();
    }
    Celoe Celoe::operator+(const Celoe& rhs) const {
        int num = GetNum() * rhs.GetNum();
        return Celoe(num);
    }
};

int main() {

}