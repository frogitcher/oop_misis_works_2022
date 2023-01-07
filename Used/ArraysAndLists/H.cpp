#include <iostream>
#include <string>

void left(std::string &rooms) {
    for (int i = 0; i < 10; ++i) {
        if (rooms[i] == '0') {
            rooms[i] = '1';
            return;
        }
    }
}

void right(std::string &rooms) {
    for (int i = 9; i >= 0; --i) {
        if (rooms[i] == '0') {
            rooms[i] = '1';
            return;
        }
    }
}

void free(std::string &rooms, int num) {
    rooms[num] = '0';
}

int main() {
    int n;
    std::string rooms = "0000000000";
    std::cin >> n;
    std::string s;
    std::cin >> s;
    char symbol;

    for (int j = 0; j < n; ++j) {
        symbol = s[j];
        if (symbol == 'L') {
            left(rooms);
        }
        else if (symbol == 'R') {
            right(rooms);
        }
        else {
            free(rooms, (int)symbol - 48);
        }
    }
    std::cout << rooms;

    return 0;
}