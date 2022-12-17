#include <iostream>

class IntMod {
public:
    IntMod() {};

    IntMod(int mod) {
        this->mod = mod;
    }

    IntMod(int val, int mod) {
        this->mod = mod;
        value = (val % mod + mod) % mod;
    }

    int GetValue() const {
        return value;
    }

    int GetMod() const {
        return mod;
    }


    IntMod* operator+(const IntMod other) {
        if(this->GetMod() != other.GetMod()) {
            std::cout << "Sum of two ints with different mod" << std::endl;
            return new IntMod{};
        }
        return new IntMod{(this->GetValue() + other.GetValue()) % mod, mod};
    }

    IntMod* operator-(const IntMod other) {
        if(this->GetMod() != other.GetMod()) {
            std::cout << "Sub of two ints with different mod" << std::endl;
            return new IntMod{};
        }
        return new IntMod{(this->GetValue() - other.GetValue() + mod) % mod, mod};
    }

    IntMod* operator*(const IntMod other) {
        if(this->GetMod() != other.GetMod()) {
            std::cout << "Mul of two ints with different mod" << std::endl;
            return {};
        }
        return new IntMod{(this->GetValue() * 1ll * other.GetValue()) % mod, mod};
    }

    void operator=(const IntMod other) {
        this->value = other.GetValue();
        this->mod = other.GetMod();
    }

private:
    int value = 0;
    int mod = 1e9 + 7;
};

int main() {
    IntMod* lhs = new IntMod(2, 5);
    IntMod* rhs = new IntMod(4, 5);
    IntMod* another_mod = new IntMod(5, 7);
    IntMod* def = new IntMod();

    IntMod* resAdd = (*lhs + *rhs);
    IntMod* resSub = (*lhs - *rhs);
    IntMod* resMul = (*lhs * *rhs);
    IntMod* resEq = new IntMod{};
    resEq = lhs;

    std::cout << resAdd->GetValue() << std::endl;
    std::cout << resSub->GetValue() << std::endl;
    std::cout << resMul->GetValue() << std::endl;
    
    std::cout << resEq->GetValue() << std::endl;
    lhs = *lhs + *lhs;
    std::cout << resEq->GetValue() << std::endl;
    std::cout << lhs->GetValue() << std::endl;
    
    std::cout << def->GetValue() << ' ' << def->GetMod() << std::endl;

    std::cout << another_mod->GetValue() << ' ' << another_mod->GetMod() << std::endl;
    another_mod = *another_mod + *lhs;
    std::cout << another_mod->GetValue() << ' ' << another_mod->GetMod() << std::endl;

    return 0;
}