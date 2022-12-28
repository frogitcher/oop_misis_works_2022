#include <iostream>
#include <algorithm>
int main()
{
    int n;
    int A;
    int B;
    int k = 0;
    std::cin >> n >> A >> B;
    int s[100001];
    int si;
    std::cin >> si;
    int sum = si;
    for (int i = 0; i < n-1; i++)
    {
        std::cin >> s[i];
        sum += s[i];
    }

    std::sort(s, s+n-1, std::greater<int>());
    if (n == 1)
        {
            std::cout << k;
        }
    for (int i = 0; i < n-1; i++)
    {
        if (((A*si)/sum) >= B)
        {
            std::cout << k;
            break;
        }
        else
        {
            k++;
            sum -= s[i];
            if (sum == si)
            {
                std::cout << k;
                break;
            }
        }
    }
}


/* Thu Nov 03 2022 19:58:23 GMT+0300 (Moscow Standard Time) */
