#include <iostream>
#include <string>
#include <vector>
using namespace std;

void skobki(string s) {
vector<int> v;
int k = 0, num = 0;
for (int i = 0; i < s.length(); ++i) {
    if (s[i] == '(') {
        v.push_back(1);
        num += 1;
    }
    else if (s[i] == ')') {
        if (num > 0 and v[num - 1] == 1) {
            v.pop_back();
            num -= 1;
        }
        else {
            k = 1;
            break;
        }
    }
}
if (k == 1) {
    cout << "No" << endl;
}
else if (v.size() == 0) {
    cout << "Yes" << endl;
}
else {
    cout << "No" << endl;
}
}

int main() {
int n, q;
cin >> n >> q;
string s, s1;
cin >> s;
for(int i = 0; i < q; ++i) {
    int a, b;
    cin >> a >> b;
    s1 = s;
    if(s1[a - 1] == s1[b - 1]) {
        cout << "Yes" << endl;
        continue;
    }
    swap(s1[a - 1], s1[b - 1]);

    skobki(s1);
}
}