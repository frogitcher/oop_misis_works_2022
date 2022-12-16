#include <iostream>
using namespace std;
int main() {
    int n, a, b, c, d, sum1, sum2, count = 0;
    cin >> n;
    cin >> a >> b >> c >> d;
    sum1 = a + b + c + d;
    for (int i = 2; i <= n; i++) {
        cin >> a >> b >> c >> d;
        sum2 = a + b + c + d;
        if (sum2 > sum1) {
            count += 1;
        }
    }
    cout << count + 1;
}