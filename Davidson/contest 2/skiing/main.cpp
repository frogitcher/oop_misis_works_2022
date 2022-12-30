#include <iostream>
#include <vector>
#include <string>

void moves(char a, std::vector<int> &curr){
    switch (a) {
        case 'S':
            curr[1]-=1;
            break;
        case 'N':
            curr[1]+=1;
            break;
        case 'W':
            curr[0]-=1;
            break;
        case 'E':
            curr[0]+=1;
            break;
        default:
            break;
    }
}

int main() {
    std::vector<int> ans;
    int t;
    std::cin>>t;
    for (int i=0; i<t; i++) {
        std::string s;
        std::cin>>s;
        int time=0;
        std::vector<std::vector<int>> ways{{0,0}};
        std::vector<int> curr{0,0};
        for (char str : s){
            moves(str, curr);
            if (std::find(ways.begin(), ways.end(), curr)==ways.end()) {
                ways.push_back(curr);
                time+=5;
            } else {
                time+=1;
            }
        }
        ans.push_back(time);
    }
    for (int i : ans) {
        std::cout<<i<<std::endl;
    }
}
