#include <iostream>
using namespace std;

int reverse(int n) {
    if(n == 0) return 0;
    int a;
    cin >> a;
    reverse(n-1);
    cout << a << " ";
}
int main() {
    int n;
    cin >> n;
    reverse(n);
}