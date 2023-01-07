#include <iostream>
#include <set>

class DoubleSet {
    private:
        std::set <int> _set1;
        std::set <int> _set2;
    public:
        DoubleSet(std::set <int> set1 = {}, std::set <int> set2 = {}) : _set1(set1), _set2(set2) {}
        ~DoubleSet() {}
        void ChangeFirstSet(std::set <int> const& set) {
            _set1 = set;
        }
        void ChangeSecondSet(std::set <int> const& set) {
            _set2 = set;
        }
        void InsertIntoFirst(int const& value) {
            _set1.insert(value);
        }
        void InsertIntoSecond(int const& value) {
            _set2.insert(value);
        }
        void EraseFromFirst(int const& value) {
            _set1.erase(value);
        }
        void EraseFromSecond(int const& value) {
            _set2.erase(value);
        }
        std::set <int> GetSetIntersection() {
            std::set <int> intersection;
            for (auto it : _set1) {
                if (_set2.find(it) != _set2.end()) {
                    intersection.insert(it);
                }
            }
            return intersection;
        }
        std::set <int> GetFirstSet() {
            return _set1;
        }
        std::set <int> GetSecondSet() {
            return _set2;
        }
};

int main() {
    std::set <int> a = {1, 4, 10, 3, 8};
    std::set <int> b = {-2, 4, 5, 12, 1};
    DoubleSet sus{a, b};
    sus.EraseFromFirst(5);
    sus.InsertIntoSecond(12);
    std::cout << "Intersection (1, 4): ";
    for (auto it : sus.GetSetIntersection()) {
        std::cout << it << ' ';
    }
    sus.InsertIntoFirst(-100);
    sus.InsertIntoSecond(3);
    std::cout << "\nFirstSet (-100, 1, 3, 4, 8, 10): ";
    for (auto it : sus.GetFirstSet()) {
        std::cout << it << ' ';
    }
    std::cout << "\nSecondSet (-2, 1, 3, 4, 5, 12): ";
    for (auto it : sus.GetSecondSet()) {
        std::cout << it << ' ';
    }
}