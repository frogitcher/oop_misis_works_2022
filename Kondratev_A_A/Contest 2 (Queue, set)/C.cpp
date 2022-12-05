#include <iostream>
#include <string>
#include <array>
#include <set>
#include <vector>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    string directions;
    set<array<int, 4>> used;
    vector<int> answers(t, 0);
    for (int i = 0; i < t; ++i) {
        int x = 0, y = 0, res = 0;
        array<int, 4> road = {};
        cin >> directions;
        for (const char &direction: directions) {
            switch (direction) {
                case 'S': {
                    road = {x, --y, x, y + 1};
                    break;
                }
                case 'N': {
                    road = {x, y, x, ++y};
                    break;
                }
                case 'W': {
                    road = {--x, y, x + 1, y};
                    break;
                }
                case 'E': {
                    road = {x, y, ++x, y};
                    break;
                }
            }
            if (used.count(road)) {
                ++res;
            } else {
                res += 5;
            }
            used.insert(road);
        }
        answers[i] = res;
        used.clear();
    }
    for (const int &answer: answers) { cout << answer << '\n'; }
}