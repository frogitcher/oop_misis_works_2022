#include <iostream>
#include <string>
#include <algorithm>

int main()
{   
    int n;
    std::cin >> n;
    std::string a;
    std::cin >> a;
    int ca = 0;
    int cc = 0;
    int cg = 0;
    int ct = 0;
    int cboil = 0;
    for (int i = 0; i < a.size(); ++i){
        switch (a[i]) {
            case 'A': 
                ca += 1;
                break;
            case 'C': 
                cc += 1;
                break;
            case 'G': 
                cg += 1;
                break;
            case 'T': 
                ct += 1;
                break;
            case '?': 
                cboil += 1;
                break;
        }
    }
    int maxc = std::max({ca, cc, cg, ct});
    if (a.size() % 4 > 0 || maxc * 3 - (ca + cc + cg + ct - maxc) > cboil) {
        std::cout << "===";
    }
    else {
        if (maxc * 3 - (ca + cc + cg + ct - maxc) < cboil) maxc = a.size() / 4;
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] == '?') {
                if (ca < maxc) { a[i] = 'A'; ++ca; }
                else if (cc < maxc) { a[i] = 'C'; ++cc; }
                else if (cg < maxc) { a[i] = 'G'; ++cg; }
                else if (ct < maxc) { a[i] = 'T'; ++ct; }
            }
        }
        std::cout << a;
    } 
}