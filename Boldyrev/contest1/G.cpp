#include <iostream>

int main()
{   
    int n;
    std::cin >> n;
    char * c = new char [n + 1];
    std::cin >> c;
    int a[26];
    for (int i = 0; i < 26; ++i) a[i] = 0;
    for (int i = 0; i < n; ++i) {
        int code = (int) c[i];
        if (code > 91) code -= 32;
        code -= 65;
        a[code] = 1;
    }
    delete [] c;
    bool ispan = true;
    for (int i = 0; i < 26; ++i) {
        if (!a[i]) ispan = false;
    }
    if (ispan) std::cout << "YES";
    else std::cout << "NO";
}