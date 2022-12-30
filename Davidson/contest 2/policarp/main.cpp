#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> ans;
    int t;
    std::cin>>t;
    for (int j=0; j<t; j++) {
        int n,res=0;
        bool is=true;
        std::cin>>n;
        std::vector<int> num(n);
        for (int i=n-1; i>=0; i--) {
            std::cin>>num[i];
            if (is && (std::count(num.begin(), num.end(), num[i])>=2)) {
                res=i+1;
                is=false;
            }
        }
        ans.push_back(res);
    }
    for (int i : ans) {
        std::cout<<i<<std::endl;
    }
