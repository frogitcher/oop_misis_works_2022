#include <iostream>
#include <string>
int main()
{
    unsigned int a[85];
    for (int i = 0; i < 85; i++)
        a[i] = 0;
    unsigned char s[256];
    for (int i = 0; i < 256; i++)
        s[i] = '0';
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> s[i];
        a[int(s[i])] += 1;
    }
    
    int mx = 0;
    char b;
    for (int i = 65; i < 85; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
            b = s[i];
        }
    }
    int N = n/4;
    bool da = true;
    //char dnk[4] = {'A', 'C', 'G', 'T'};
    if ((mx*4 <= n) and ((n - mx*4) % 4 == 0) and (n % 4 == 0))
    {
        // if (mx*4 == n)
        // {
        //     for 
        // }
        if (a[int('A')] < N)
        {
            for (int i = 0; i < n; i++)
            {
                if(s[i] == '?')
                    {
                        s[i] = 'A';
                        a[int('A')] += 1;
                    }
                 if (a[int('A')] == N)
                            break;
            }
            if (a[int('A')] != N)
                std::cout << "===";
        }
        
        if (a[67] < N)
        {
            for (int i = 0; i < n; i++)
            {
                if(s[i] == '?')
                    {
                        s[i] = 'C';
                        a[67] += 1;
                    }
                if (a[67] == N)
                            break;
            }
            if (a[67] != N)
                std::cout << "===";
        }
        
        if (a[71] < N)
        {
            for (int i = 0; i < n; i++)
            {
                if(s[i] == '?')
                    {
                        s[i] = 'G';
                        a[71] += 1;
                    }
                if (a[71] == N)
                            break;
            }
            if (a[71] != N)
                std::cout << "===";
        }
        
        if (a[84] < N)
        {
            for (int i = 0; i < n; i++)
            {
                if(s[i] == '?')
                    {
                        s[i] = 'T';
                        a[84] += 1;
                    }
                if (a[84] == N)
                            break;
            }
            if (a[84] != N)
                std::cout << "===";
        }
        
        if(a[65]+a[67]+a[71]+a[84] == n)
            {
                for (int i = 0; i < n; i++)
                    std::cout << s[i];
            }
    }
    
    else
        std::cout << "===";
}
/* Mon Nov 07 2022 22:26:37 GMT+0300 (Moscow Standard Time) */

