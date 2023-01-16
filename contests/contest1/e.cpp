#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < 3; ++j) {
            s[j] = tolower(s[j]);
        }
        if (s == "yes") {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

}