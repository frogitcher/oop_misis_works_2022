#include <iostream>
#include <string>
int main() {
    int n, ca=0, cc=0, cg=0, ct=0, unknown=0;
    std::cin>>n;
    std::string s;
    std::cin>>s;
    for (int i=0; i<n; i++) {
        switch (s[i]) {
            case 'A':
                ca++;
                break;
            case 'C':
                cc++;
                break;
            case 'G':
                cg++;
                break;
            case 'T':
                ct++;
                break;
            default:
                unknown++;
                break;
        }
    }
    if (unknown%4!=0) {
        std::cout<<"==="<<std::endl;
    }
    
}
