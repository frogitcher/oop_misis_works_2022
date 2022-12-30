#include <iostream>
#include <vector>

int main() {
    long int n,k,a,win=0,t=0;
    std::cin>>n>>k;
    for (int i=0; i<n; i++) {
        std::cin>>a;
        if (win>a){
            t++;
            if (t==k) break;
        } else {
            win=a;
            t=1;
        }
    }
    std::cout<<win<<std::endl;
}
