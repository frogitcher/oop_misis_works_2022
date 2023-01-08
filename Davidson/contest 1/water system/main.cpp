#include <iostream>
#include <vector>

int main() {
    int n, a, b, s1, sum=0;
    std::cin>>n>>a>>b>>s1;
    std::vector<int> hole(n-1);
    for (int i=0; i<n-1; i++) {
        std::cin>>hole[i];
        sum+=hole[i];
    }
    sort(hole.begin(),hole.end());
    int t=0;
    std::vector<int>::iterator it = hole.end();
    it--;
    
    while (s1*a/(s1 + sum)<b) {
        sum-=(*it);
        it--;
        t++;
    }
    std::cout<<t<<std::endl;
    
}
