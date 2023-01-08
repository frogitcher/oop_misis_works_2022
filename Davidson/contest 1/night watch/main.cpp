#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main() {
    int n;
    cin >> n;

    vector<int> powers(n);
    for (int& element : powers)
    {
        cin>>element;
    }

    int min_e = *min_element(powers.begin(), powers.end());
    int max_e = *max_element(powers.begin(), powers.end());

    int cnt = 0;
    for (int element : powers) {
        if ((element < max_e) && (element > min_e)) {
            cnt++;
        }
    }
    cout << cnt;
}
