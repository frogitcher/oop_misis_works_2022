#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    vector<int> answers(t, 0);
    for (int i = 0; i < t; ++i) {
        int n = 0, res = 0;
        cin >> n;
        vector<int> numbers(n, 0);
        int curr = 0;
        for (int j = 0; j < n; ++j) {
            cin >> curr;
            --curr;
            if (numbers[curr]) {
                res = max(res, numbers[curr]);
            }
            numbers[curr] = j + 1;
        }
        answers[i] = res;
    }
    for (int answer: answers) { cout << answer << '\n'; }
}