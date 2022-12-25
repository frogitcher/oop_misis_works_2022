#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    
    std::string s;
    std::cin >> s;

    int needChars = n / 4;
    int a = 0, g = 0, t = 0, c = 0;
    for(int i = 0;i < n;i++) {
        a += s[i] == 'A';
        g += s[i] == 'G';
        t += s[i] == 'T';
        c += s[i] == 'C';
    }

    for(int i = 0;i < n;i++) {
        if(s[i] == '?') {
            if(a < needChars) {
                s[i] = 'A';
                a++;
            } else if(g < needChars) {
                s[i] = 'G';
                g++;
            } else if(t < needChars) {
                s[i] = 'T';
                t++;
            } else if(c < needChars) {
                s[i] = 'C';
                c++;
            }
        }
    }

    if(a + g + t + c == n && a == needChars && g == needChars && t == needChars) {
        std::cout << s;
    } else {
        std::cout << "===";
    }

    return 0;
}