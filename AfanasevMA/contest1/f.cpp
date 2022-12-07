#include <iostream>
#include <iterator>
#include <algorithm>


int main() {
    int l;
    std::cin >> l;
    std::string genome;
    std::cin >> genome;
    int a = 0;
    int c = 0;
    int g = 0;
    int t = 0;
    int q = 0;
    for (int i = 0; i < l; i++) {
        char ch = genome[i];
        a += (ch == 'A');
        c += (ch == 'C');
        g += (ch == 'G');
        q += (ch == '?');
    }
    int max_acgt = std::max({a, c, g, t});
    int needs_a = max_acgt - a;
    int needs_c = max_acgt - c;
    int needs_g = max_acgt - g;
    int needs_t = max_acgt - t;
    int cycle = 0;
    std::string cyclic = "ACGT";
    if (needs_a + needs_c + needs_g + needs_t <= q && (needs_a + needs_c + needs_g + needs_t - q) % 4 == 0) {
        for (int i = 0; i < l; i++) {
            char ch = genome[i];
            if (ch == '?') {
                if (needs_a > 0) {
                    std::cout << 'A';
                    needs_a--;
                    continue;
                }
                else if (needs_c > 0) {
                    std::cout << 'C';
                    needs_c--;
                    continue;
                }
                else if (needs_g > 0) {
                    std::cout << 'G';
                    needs_g--;
                    continue;
                }
                else if (needs_t > 0) {
                    std::cout << 'T';
                    needs_t--;
                    continue;
                }
                else {
                    std::cout << cyclic[cycle % cyclic.length()];
                    cycle++;
                }
            }
            else {
                std::cout << ch;
            }
        }
    }
    else {
        std::cout << "===";
    }
}
