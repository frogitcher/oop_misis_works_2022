#include <iostream>
#include <string>

std::string f(std::string s){
    int n, up=0, down=0;
    std::string ans('a',s.size());
    n=s.size();
    for (int i=0; i<n; i++) {
        if (std::isupper(s[i])){
            up++;
        } else {
            down++;
        }
    }
    if (down>up) {
        for (int i=0; i<n; i++) {
            if (std::isupper(s[i])){
                ans[i] = s[i]+32;
            } else {
                ans[i]=s[i];
            }
        }
    } else {
        for (int i=0; i<n; i++) {
            if (!std::isupper(s[i])){
                ans[i] = s[i]-32;
            } else {
                ans[i]=s[i];
            }
        }
    }
    return ans;
}

int main() {
    std::string s;
    std::cin>>s;
    
    
    std::cout<<f(s)<<std::endl;
}
