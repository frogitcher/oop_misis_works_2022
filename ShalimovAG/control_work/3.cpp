#include <iostream>
#include <vector>
#include <set>

class TwoSets {
public:
    void InsertIntoFirst(int x) {
        st1.insert(x);
    }

    void InsertIntoSecond(int x) {
        st2.insert(x);
    }

    void EraseFromFirst(int x) {
        if(st1.find(x) != st1.end()) { st1.erase(x); }
    }

    void EraseFromSecond(int x) {
        if(st2.find(x) != st2.end()) { st2.erase(x); }
    }

    void Print() {
        std::cout << "First set: ";
        for(int e : st1)
            std::cout << e << " ";
        std::cout << std::endl;
        
        std::cout << "Second set: ";
        for(int e : st2)
            std::cout << e << " ";
        std::cout << std::endl;
    }

    std::set<int> GetSetIntersection() {
        std::set<int> result;
        for(int e : st1) {
            if(st2.find(e) != st2.end()) {
                result.insert(e);
            }
        }
        return result;
    }
private:
    std::set<int> st1, st2;
};

int main() {

    TwoSets* st = new TwoSets();

    int q;
    std::cin >> q;

    for(int i = 0;i < q;i++) {
        std::string t;
        std::cin >> t;
        if(t == "i1") {
            int x;
            std::cin >> x;
            st->InsertIntoFirst(x);
        }
        if(t == "i2") {
            int x;
            std::cin >> x;
            st->InsertIntoSecond(x);
        }
        if(t == "e1") {
            int x;
            std::cin >> x;
            st->EraseFromFirst(x);
        }
        if(t == "e2") {
            int x;
            std::cin >> x;
            st->EraseFromSecond(x);
        }
        if(t == "inter") {
            std::set<int> res = st->GetSetIntersection();
            for(int e : res)
                std::cout << e << " ";
            std::cout << std::endl;
        }
        st->Print();
    }


    return 0;
}

/*


*/