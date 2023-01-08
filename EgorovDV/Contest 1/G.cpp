#include <iostream>
#include <string>
int main(){
    char s[101];
    int a[26];
    int k = 0;
    for (int i = 0; i < 26; i++)
        a[i] = 0;
    int n = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> s[i];
        if (int(s[i]) > 96)
            a[char(s[i]) - 97] = 1;
        else
            a[char(s[i]) - 65] = 1;
    }
    
    for (int i = 0; i < 26; i++){
            k += a[i];
        }
    if (k < 26)
        std::cout << "NO";
    else
        std::cout << "YES";
}
/* Mon Nov 07 2022 22:41:36 GMT+0300 (Moscow Standard Time) */
