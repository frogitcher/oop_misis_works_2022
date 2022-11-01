//
// Created by Максим Афанасьев on 30.10.2022.
//

#include <iostream>
#include <iterator>
#include <array>


int main() {
    std::array<bool, 10> state {};
    int l;
    std::string str;
    std::cin >> l >> str;
    for (int i = 0; i < l; i++) {
        char ch = str[i];
        if (ch == 'L') {
            for (int ii = 0; ii < 10; ii++) {
                if (not state[ii]) {
                    state[ii] = true;
                    break;
                }
            }
        }
        else if (ch == 'R') {
            for (int ii = 9; ii >= 0; ii--) {
                if (not state[ii]) {
                    state[ii] = true;
                    break;
                }
            }
        }
        else {
            int at = ch - '0';
            state[at] = false;
        }
    }
    for (int i = 0; i < 10; i++) {
        std::cout << (state[i] ? '1' : '0');
    }
}
