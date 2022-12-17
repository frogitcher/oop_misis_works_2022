#include <string>
#include <iostream>
#include <stdexcept>
#include <set>

void printSet(std::set<int> & s) {
    std::cout << "Your set: ";
    for (auto elem:s) {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
}

class MySets {
public:
    MySets(std::set<int> &rhs, std::set<int> &lhs) {
        this->first_set = rhs;
        this->second_set = lhs;
    };

    MySets(const MySets &other) {
        this->first_set = other.getFirstSet();
        this->second_set = other.getSecondSet();
    };

    void InsertIntoFirst(int value) {
        first_set.insert(value);
    }

    void InsertSecondFirst(int value) {
        second_set.insert(value);
    }

    void EraseFromFirst(int value) {
        first_set.erase(value);
    }

    void EraseFromSecond(int value) {
        second_set.erase(value);
    }

    std::set<int> GetSetIntersection() {
        std::set<int> result;
        for (auto elem: first_set) {
            if (second_set.count(elem)) {
                result.insert(elem);
            }
        }
        return result;
    }

    std::set<int> getFirstSet() const { return first_set; };

    std::set<int> getSecondSet() const { return second_set; }

    friend std::ostream &operator<<(std::ostream &basicOstream, const MySets &rhs) {
        basicOstream << "\nFirst set: ";
        for (auto number: rhs.getFirstSet()) {
            basicOstream << number << ' ';
        }
        basicOstream << '\n';
        basicOstream << "Second set: ";
        for (auto number: rhs.getSecondSet()) {
            basicOstream << number << ' ';
        }
        basicOstream << '\n';
        return basicOstream;
    };

private:
    std::set<int> first_set;
    std::set<int> second_set;
};

int main() {
    std::set<int> x = {1, 2, 3};
    std::set<int> y = {2, 3, 5};

    MySets a(x, y);
    std::cout << a;
    printSet(a.GetSetIntersection()); // 2 3

    a.InsertIntoFirst(5);
    printSet(a.GetSetIntersection()); // 2 3 5

    a.EraseFromFirst(5);
    printSet(a.GetSetIntersection());  // 2 3

    a.EraseFromFirst(5);
    std::cout << a;

}