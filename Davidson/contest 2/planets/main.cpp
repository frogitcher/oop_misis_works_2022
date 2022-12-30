#include <iostream>
#include <vector>
#include <algorithm>

void print(std::vector<int> a){
    for (int i=0; i<a.size(); i++) {
        std::cout<<a[i]<<' ';
    }
    std::cout<<std::endl;
}
bool find(std::vector<int> v, int a){
    for (int i=0; i<v.size(); i++) {
        if (v[i]==a) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> ans;
    int times;
    std::cin>>times;
    for (int k=0; k<times; k++) {
        int n,c;
        std::cin>>n>>c;
        std::vector<int> pl(n);
        std::vector<int> unic;
        for (int i=0; i<n; i++) {
            std::cin>>pl[i];
            
            if (!find(unic, pl[i])) {
                unic.push_back(pl[i]);
            }
        }
    //    print(pl);
    //    print(unic);
        
        int cost=0, t=0;
        for (int j : unic) {
            t=std::count(pl.begin(), pl.end(), j);
            if (c>t){
                cost+=t;
            } else {
                cost+=c;
            }
        }
        ans.push_back(cost);
    }
    for (int a : ans) {
        std::cout<<a<<std::endl;
    }
}
