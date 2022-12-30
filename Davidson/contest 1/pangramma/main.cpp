#include <iostream>
#include <string>
#include <map>
int main() {
    std::string s;
    int n;
    std::cin>>n;
    std::map<char,char> ans;
    std::cin>>s;
    for (int i=0; i<s.size(); i++) {
        if (std::isupper(s[i])) {
            s[i]+=32;
        }
        ans[s[i]]=s[i];
    }
    
    (ans.size()==26) ? std::cout<<"YES"<<std::endl : std::cout<<"NO"<<std::endl;
}
