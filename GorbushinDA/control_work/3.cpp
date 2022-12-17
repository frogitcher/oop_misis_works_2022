#include <iostream>
#include <set>
class two_set {
private:
    std::set<int> q1 = {1, 2, 3, 4, 5, 6, 7};
    std::set<int> q2 = {1, 2, 3, 4, 5, 6, 7};
public:
    void InsertIntoFirst(int value) {
        q1.insert(value);
    }

    void InsertIntoSecond(int value) {
        q2.insert(value);
    }

    void EraseFromFirst(int value) {
        q1.erase(value);
    }

    void EraseFromSecond(int value) {
        q2.erase(value);
    }

    void GetIntersection() {

    }
};
int main() {
    two_set m;
    m.InsertIntoFirst(8);
    m.InsertIntoSecond(5);
    m.EraseFromFirst(5);
    m.EraseFromSecond(5);
    m.GetIntersection();
}