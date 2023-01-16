#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    if (n % 4 == 0) {
        std::string s;
        std::cin >> s;
        int cnt_A = 0;
        int cnt_C = 0;
        int cnt_G = 0;
        int cnt_T = 0;
        int normal = n / 4;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A')
                cnt_A++;
            else if (s[i] == 'C')
                cnt_C++;
            else if (s[i] == 'G')
                cnt_G++;
            else if (s[i] == 'T')
                cnt_T++;
        }
        if (cnt_T > normal || cnt_G > normal || cnt_C > normal || cnt_A > normal)
            std::cout << "===";
        else {
            cnt_A = normal - cnt_A;
            cnt_C = normal - cnt_C;
            cnt_G = normal - cnt_G;
            cnt_T = normal - cnt_T;
            for (int i = 0; i < n; i++) {
                if (s[i] != '?')
                    std::cout << s[i];
                else {
                    if (cnt_A > 0) {
                        std::cout << 'A';
                        cnt_A--;
                    }
                    else if (cnt_C > 0) {
                        std::cout << 'C';
                        cnt_C--;
                    }
                    else if (cnt_G > 0) {
                        std::cout << 'G';
                        cnt_G--;
                    }
                    else {
                        std::cout << 'T';
                        cnt_T--;
                    }
                }
            }
        }
    }
    else {
        std::cout << "===";
    }
}