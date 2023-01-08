#include <iostream>
#include <string>
int main()
{
    std::string word[1001];
    bool da = false;
    std::string a[8] = {"yes", "Yes", "YEs", "YES", "yEs", "yES", "yeS", "YeS"};
    std::string b[1001];
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> word[i];
        for (int j = 0; j < 8; j++)
        {
            if (word[i] == a[j])
            {
                da = true;
                break;
            }
        }
            if (da)
            b[i] = "YES";
            else
            b[i] = "NO";
            da = false;
    }
        for (int i = 0; i < n; i++)
        {
            std::cout << b[i] << std::endl;
        }
}