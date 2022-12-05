#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n = 0, k = 0;
        cin >> n >> k;
        int curr = 0;
        map<int, pair<int, int>> indexes = {};
        for (int j = 0; j < n; ++j) {
            cin >> curr;
            if (!indexes[curr].first) {
                indexes[curr].first = j + 1;
            }
            indexes[curr].second = j + 1;
        }
        int a = 0, b = 0;
        for (int j = 0; j < k; ++j) {
            cin >> a >> b;
            cout << ((indexes[a].first && indexes[a].first < indexes[b].second) ? "YES" : "NO") << '\n';
        }
    }
}