#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int findf(std::vector<int> v, int a){
    int t=1;
    for (auto it=v.begin(); it!=v.end(); it++) {
        if (*it==a) {
            return t;
        }
        t++;
    }
    return -1;
}
int findl(std::vector<int> v, int a){
    int t=v.size();
    for (auto it=v.rbegin(); it!=v.rend(); it++) {
        if (*it==a) {
            return t;
        }
        t--;
    }
    return -1;
}

int main() {
    
    std::vector<std::string> ans;
    int times;
    std::cin>>times;
    
    for (int t=0; t<times; t++) {
        
    
        int n,k;
        std::cin>>n>>k;
        std::vector<int> trains(n);
        for (int i=0; i<n; i++) {
            std::cin>>trains[i];
        }
        int a,b, apos, bpos;
        for (int i=0; i<k; i++) {
            std::cin>>a>>b;
            apos=findf(trains, a);
            bpos=findl(trains, b);
            if (apos<bpos && apos!=-1 && bpos!=-1) {
                ans.push_back("YES");
            } else {
                ans.push_back("NO");
            }
        }
    }
    for (int j=0; j<ans.size(); j++) {
        std::cout<<ans[j]<<std::endl;
    }
}
