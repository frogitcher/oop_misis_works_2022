#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0) return a;
    else return gcd(min(a,b), max(a,b) % min(a,b));
}
int lcm(int a, int b) {
    return (a*b / gcd(a, b));
}
int main() {
    int a,b;
    cin >> a;
    cin >> b;
    cout << lcm(a,b)-gcd(a,b);
}