#include <iostream>
#include <set>
#include <algorithm>

class TwoSets {

    private:
        std::set<int> firstSet; 
        std::set<int> secondSet;

    public:
        ~TwoSets() { delete this; }
        TwoSets() {
            this->firstSet = {};
            this->secondSet = {};
        }
        TwoSets(std::set<int> _firstSet, std::set<int> _secondSet) {
            this->firstSet = _firstSet;
            this->secondSet = _secondSet;
        }

        void insertIntoFirst(int value) {
            firstSet.insert(value);
            std::cout << "insert" << std::endl;
        }

        void insertIntoSecond(int value) {
            this->secondSet.insert(value);
        }

        void eraseFromFirst(int value) {
            for(int element : this->firstSet) {
                if(element == value) 
                    this->firstSet.erase(this->firstSet.find(element));
            }
        }

        void eraseFromSecond(int value) {
            for(int element : this->secondSet) {
                if(element == value) 
                    this->secondSet.erase(this->secondSet.find(element));
            }
        }

        std::set<int> getSetIntersection() {
            std::set<int> setIntersection = {};

            for(int firstElement : this->firstSet) {
                for(int secondElement : this->secondSet) {
                    if(firstElement == secondElement) 
                        setIntersection.insert(firstElement); 
                }
            }

            return setIntersection;
        }

        std::string toString() {
            std::string first = "";
            for(int e : this->firstSet) first += e + " ";
            std::string second = "";
            for(int e : this->secondSet) second += e + " ";
            return first + "|||" + second + "\n";
        }
    
};

int main() {
    // TwoSets a = TwoSets();
    // std::cout << a.toString() << std::endl;
    // a.insertIntoFirst(5);
    // std::cout << a.toString() << std::endl;
    // a.insertIntoFirst(5);
    // std::cout << a.toString() << std::endl;
    // a.insertIntoFirst(3);
    // std::cout << a.toString() << std::endl;
    // a.insertIntoSecond(4);
    // std::cout << a.toString() << std::endl;
    // a.insertIntoSecond(5);
    // std::cout << a.toString() << std::endl;
    // a.insertIntoSecond(4);
    // std::cout << a.toString() << std::endl;
    // a.eraseFromSecond(4);
    // std::cout << a.toString() << std::endl;
    // a.~TwoSets();
    return 0;
}