#include <iostream>

int main()
{   
    int n;
    std::cin >> n;
    for (int _ = 0; _ < n; ++_) {
        char c[4];
        std::cin >> c;
        if ((c[0] == 'y' || c[0] == 'Y') && (c[1] == 'e' || c[1] == 'E') && (c[2] == 's' || c[2] == 'S')) {
            std::cout << "Yes" << std::endl;
        }
        else {
            std::cout << "No" << std::endl;
        }
    }
}