#include <iostream>
#include <algorithm>

using namespace std;
string gen(int n, int cnt1, int cnt2, string ans) {
    if(cnt1 + cnt2 == 2 * n) {
        return ans;
    }
    if(cnt1 < n) {
        gen(n, cnt1 + 1, cnt2, ans + "(");
    }
    if(cnt1 > cnt2) {
        gen(n, cnt1, cnt2 + 1, ans + ')');
    }
}
string next(string s) {
   int cnt1 = 0;
   int cnt2 = 0;
   for(int i = s.length(); i >=1; i--)
       if(s[i] == '(') {
            cnt1++;
            if (cnt1 > cnt2) break;
       }
       else cnt2++;
   s.replace(s.length() - cnt1 - cnt2, s.length() - 1, "");
   if (s == "") return "";
   else {
        s = s +')';
        for (int j = 1; j <= cnt1; j++) s = s + '(';
        for (int j = 1; j <= cnt2-1; j++) s = s + ')';
        return s;
   }
}

int main() {
    int n;
    cin >> n;
    string s = gen(n, n/2, n/2, "");
    while(next(s) != "") {
        cout << next(s);
    }
}