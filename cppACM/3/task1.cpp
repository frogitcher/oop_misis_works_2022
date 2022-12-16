#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    if(string(s1) > string(s2)) cout << ">";
    else if(string(s1) < string(s2)) cout << "<";
    else cout << "=";

    return 0;
}
