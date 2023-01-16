#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector <pair<int, int> > marks;
    int kol;
    cin >> kol;
    marks.resize(kol);
    for (int i = 0; i < kol; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        marks[i].first = 400 - a - b - c - d;
        marks[i].second = i + 1;

    }

    sort(marks.begin(), marks.end());
    for (int i = 0; i < kol; i++) {
        if (marks[i].second == 1) {
            cout << i + 1;

        }
    }
}