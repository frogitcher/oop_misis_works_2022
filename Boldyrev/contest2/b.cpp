#include <iostream>
#include <string>
#include <map>
#include <vector>

int main() {   
    int t;
    std::cin >> t;
    for (int _ = 0; _ < t; ++_) {
        int n;
        std::cin >> n;
        std::map <std::string, int> words;
        std::vector <std::string> f(n);
        std::vector <std::string> s(n);
        std::vector <std::string> t(n);
        int cf = 0; 
        int cs = 0;
        int ct = 0;
        for (int j = 0; j < n; ++j) {
            std::cin >> f[j];
            if (words.count(f[j]) == 0) words[f[j]] = 0;
            words[f[j]] += 1;
        }
        for (int j = 0; j < n; ++j) {
            std::cin >> s[j];
            if (words.count(s[j]) == 0) words[s[j]] = 0;
            words[s[j]] += 1;
        }
        for (int j = 0; j < n; ++j) {
            std::cin >> t[j];
            if (words.count(t[j]) == 0) words[t[j]] = 0;
            words[t[j]] += 1;
        }
        for (int i = 0; i < n; ++i) {
            switch (words[f[i]]) {
                case 1:
                    cf += 3;
                    break;
                case 2:
                    cf += 1;
                    break;
                case 3:
                    break;
            }
            switch (words[s[i]]) {
                case 1:
                    cs += 3;
                    break;
                case 2:
                    cs += 1;
                    break;
                case 3:
                    break;
            }
            switch (words[t[i]]) {
                case 1:
                    ct += 3;
                    break;
                case 2:
                    ct += 1;
                    break;
                case 3:
                    break;
            }
        }
        std::cout << cf << " " << cs << " " << ct << std::endl;
    }
}