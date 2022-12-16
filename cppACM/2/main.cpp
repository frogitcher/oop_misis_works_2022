#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mas[n];
    for(int i = 0; i < n; i++) cin >> mas[i];

    vector<int> myvector (mas, mas+n);
    sort(myvector.begin(), myvector.end());
    copy(myvector.begin(), myvector.end(), mas);
    for(int i = n - 1; i >=0; i--) cout << mas[i] << " ";

    return 0;
}
