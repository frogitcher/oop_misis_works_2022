#include <iostream>
#include <set>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int last = n + 1;
    set<int> snacks;
    int curr = 0;
    for (int _ = 0; _ < n; ++_) {
        cin >> curr;
        snacks.insert(curr);
        while (snacks.count(last - 1)) {
            cout << --last << ' ';
        }
        cout << '\n'; я
    }
}