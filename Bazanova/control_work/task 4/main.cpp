#include <iostream>
#include <cmath>

long double fact(int N)
{
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}

int main() {
    double s = sin(9.0);
    double ans = 0;
    int x = 9;
    int k = 0;
    while (std::abs(ans - s) >= pow(10, -7) ) {
        ans += pow(-1, k) * (pow(x, 2*k+1)/fact(2*k+1));
        k += 1;
    }
    std::cout << ans << " " << s;
    return 0;
}
