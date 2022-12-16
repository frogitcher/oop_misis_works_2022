#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    cin >> x;
    cin >> y;
    uint64_t f;
    uint64_t tmp1 = x + y;
    uint64_t tmp2 = tmp1 + y;
    if(n == 0) cout << x;
    else if(n == 1) cout << y;
    else {
        for(int i = 2; i < n-1; i++) {
            f = tmp1 + tmp2;
            tmp1 = tmp2;
            tmp2 = f;
        }
    cout << f;
    }
    return 0;
}