#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void left(string& rooms) {
    for (int i = 0; i < 10; i++) {
        if (rooms[i] == '0') {
            rooms[i] = '1';
            return;
        }
    }
}

void right(string& rooms) {
    for (int i = 9; i >= 0; --i) {
        if (rooms[i] == '0') {
            rooms[i] = '1';
            return;
        }
    }
}

void free(string& rooms, int num) {
    rooms[num] = '0';
}

int main() {
    int n;
    string rooms = "0000000000";
    cin >> n;
    string s;
    cin >> s;
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
    cout << rooms;
}