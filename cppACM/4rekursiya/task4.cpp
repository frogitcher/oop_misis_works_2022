#include <iostream>
#include <algorithm>

using namespace std;
void f(int n, int from, int to, int buff) {
    if(n!=0) {
        f(n-1, from, buff, to);
        cout << n << " " << from << " " << to << endl;
        f(n-1, buff, to, from);
    }
}

int main() {
    int n;
    cin >> n;
    f(n, 1, 3, 2);
}