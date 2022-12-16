#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s;
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> s;
    bool ans = true;
    stack<int> st;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '('){
            st.push(1);
            a++;
        }
        if(s[i] == '['){
            st.push(2);
            b++;
        }
        if(s[i] == '{'){
            st.push(3);
            c++;
        }
        if(s[i] == ')') {
            if(a > 0) {
                if(st.top() == 1) {
                    st.pop();
                    a--;
                } else ans = false;
            } else ans = false;
        }
        if(s[i] == ']') {
            if(b > 0) {
                if(st.top() == 2) {
                    st.pop();
                    b--;
                } else ans = false;
            } else ans = false;
        }
        if(s[i] == '}') {
            if(c > 0) {
                if(st.top() == 3) {
                    st.pop();
                    c--;
                } else ans = false;
            } else ans = false;
        }
    }
    if(!st.empty()) ans = false;
    if(ans)cout << "YES";
    else cout << "NO";
}