#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> powers(n);
    for (int& element : powers) {
        cin >> element;
    }
    int min_e = *min_element(powers.begin(), powers.end());
    int max_e = *max_element(powers.begin(), powers.end());
    int count = 0;
    for (int power : powers) {
        if (min_e < power && power < max_e) {
            count += 1;
        }
    }
    cout << count;
}