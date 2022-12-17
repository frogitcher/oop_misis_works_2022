#include <iostream>
#include <vector>

using namespace std;

vector<int> solve(vector<int> & a) {
    vector<int> ans = {-1, -1};
    const int length = a.size();
    for (int i = 0; i < length; ++i) {
        if (a[i] <= 0) {
            continue;
        }
        for (int j = i + 1; j < length; ++j) {
            if (a[j] <= 0) {
                continue;
            }
            if ((ans[0] == -1) || (abs(a[i] - a[j]) < abs(a[ans[0]] - a[ans[1]]))) {
                ans = {i, j};
            }
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> inputs = {{1, 2, 3, 4}, {1, -1, 5, 4}, {-1, -1, -5, 4}};
    for (auto input: inputs) {
        for (auto number: input) {
            cout << number << ' ';
        }
        cout << endl;
        vector<int> ans = solve(input);
        cout << "Index 1: " << ans[0] << " Index 2: " << ans[1] << endl;
        if (ans[0] != -1 && ans[1] != -1) {
            cout << "Value 1: " << input[ans[0]] << " Value 2: " << input[ans[1]] << endl;
        }
        cout << endl;
    }
}