#include <iostream>
#include <algorithm>
#include <vector>

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
   if (s == "") return 0;
   else {
        s = s +')';
        for (int j = 1; j <= cnt1; j++) s = s + '(';
        for (int j = 1; j <= cnt2-1; j++) s = s + ')';
        return s;
   }
}

bool check(string s1, string s2) {
    for(int i = 0; i < s1.length(); i++) {
        if(s1[i] != '?' && s1[i] != s2[i]) return false;
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    if(n % 2 == 1) cout << 0;
    else {
        int ans = 1;
        string first;
        for(int i = 0; i < n/2;i++) first+="(";
        for(int i = 0; i < n/2;i++) first+=")";
        while(next(first) != "") {
            if(check(s, first = next(first))) ans++;
        }
        cout << ans;
    }
    return 0;
}