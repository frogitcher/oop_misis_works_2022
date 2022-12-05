#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    vector<int> answers(t, 0);
    int n = 0, c = 0;
    for (int i = 0; i < t; ++i) {
        cin >> n >> c;
        map<int, int> orbits = {};
        int curr = 0, res = 0;
        for (int j = 0; j < n; ++j) {
            cin >> curr;
            ++orbits[curr];
        }
        for (auto[orbit, count]: orbits) {
            if (count > c) {
                res += c;
            } else {
                res += count;
            }
        }
        answers[i] = res;
    }
    for (int answer: answers) { cout << answer << '\n'; }
}