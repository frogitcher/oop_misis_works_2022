#include <iostream>
using namespace std;

int main()
{
    int check = 0;
    bool ans = true;
    string s;
    cin >> s;
    for(char c : s) {
        if(check < 0) {
            ans = false;
            break;
        } 
        if(c == '(') check++;
        else check--;
    }
    if(check !=0 ) ans = false;
    if(ans) cout << "YES";
    else cout << "NO";
}