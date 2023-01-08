#include <iostream>
int main()
{
    int n;
    int sum[4] = {0,0,0,0};
    int s = 0;
    int s1 = 0;
    int k = 1;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cin >> sum[j];
            s += sum[j];
            if (i == 0) s1 = s;
        }
        
        if (i != 0)
        {
            if (s1 < s) k++;
        }
        s = 0;
        int sum[4] = {0,0,0,0};
    }
    
    std::cout<<k;
}

/* Thu Nov 03 2022 00:10:05 GMT+0300 (Moscow Standard Time) */
