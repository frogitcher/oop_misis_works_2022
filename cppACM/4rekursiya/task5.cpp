#include <iostream>
#include <algorithm>

using namespace std;
int f(int n) {
    if(n == 2 || n == 1 || n == 0) return 1;
    else {
        return f(n-2) + f(n-1);
    }
}

int main() {
    int n = 0;
    cin >> n;
    cout << f(n);
}