#include<iostream>
#include<set>
#include<vector>

int main(){
    int n;
    std::cin >> n;

    int reqElem = n;
    std::set<int>que;

    for(int _ = 0; _ < n; ++_){
        int temp;
        std::cin >> temp;
        if(temp == reqElem){
            std::cout << reqElem << ' ';
            reqElem -= 1;
            if(queue.size() != 0) {
                while (que.size() != 0 and *(--(que.rbegin())) == reqElem) {
                    std::cout << reqElem << ' ';
                    reqElem--;
                    que.erase(--(que.rbegin()));
                }
                std::cout << '\n';
            }
            else{
                std::cout <<'\n';
            }
        }else{
            std:: cout << "\n";
            que.insert(temp);
        }
    }
    return 0;
}
