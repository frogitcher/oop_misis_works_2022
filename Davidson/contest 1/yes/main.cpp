#include <iostream>
#include <string>
#include <vector>

bool isyes (std::string s){
    if ((s[0]=='y' || s[0]=='Y') && (s[1]=='e' || s[1]=='E') && (s[2]=='s' || s[2]=='S')) {
        return true;
    } else return false;
}

int main() {
    std::vector<std::string> ans;
    int n;
    std::cin>>n;
    std::string s;
    for (int i=0; i<n; i++) {
        std::cin>>s;
        if (isyes(s)) {
            ans.push_back("YES");
        } else {
            ans.push_back("NO");
        }
    }
    for (std::string a : ans) {
        std::cout<<a<<std::endl;
    }
}
