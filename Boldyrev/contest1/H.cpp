#include <iostream>

int main()
{   
    int n;
    std::cin >> n;
    int a[10];
    for (int i = 0; i < 10; ++i) a[i] = 0;
    for (int _ = 0; _ < n; ++_) {
        char command;
        std::cin >> command;
        if (command == 'L') {
            int i = 0;
            while (i < 10) {
                if (a[i] == 0) {
                    a[i] = 1;
                    break;
                }
                ++i;
            }
        }
        else if (command == 'R') {
            int i = 9;
            while (i > -1) {
                if (a[i] == 0) {
                    a[i] = 1;
                    break;
                }
                --i;
            }
        }
        else {
            a[(int) command - 48] = 0;
        }
    }
    for (int i = 0; i < 10; ++i) std::cout << a[i];
}