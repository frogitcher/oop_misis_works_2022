#include <iostream>
using namespace std;

int main()
{
    string s;
    string ans = "";
    cin >> s;
    int num = 0;
    for(int i = 0; i < s.length(); i++) {
        if(isdigit(s[i])){
            num = num*10 + ((int)s[i] - 48);
        }
        else {
            for(int j = 0; j < num; j++) ans += s[i];
            num = 0;
        }
    }
    cout << ans;
}