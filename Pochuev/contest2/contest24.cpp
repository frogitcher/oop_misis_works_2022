#include<iostream>
#include<set>
#include<vector>

int main(int argc, char**argv){
    int n;
    std::cin >> n;

    int reqElem = n;
    std::set<int>queue;

    for(int _ = 0; _ < n; ++_){
        int temp;
        std::cin >> temp;
        if(temp == reqElem){
            std::cout << reqElem << ' ';
            reqElem -= 1;
            if(queue.size() != 0) {//std::cout << "here";
                while (queue.size() != 0 and *(--(queue.end())) == reqElem) {
                    std::cout << reqElem << ' ';
                    reqElem--;
                    queue.erase(--(queue.end()));
                }
                std::cout << '\n';
            }
            else{
                std::cout <<'\n';
            }
        }else{
            std:: cout << "\n";
            queue.insert(temp);
        }
    }
    return 0;
}