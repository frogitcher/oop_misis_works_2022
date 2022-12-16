#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mas[n];
    for(int i = 0; i < n; i++){
         cin >> mas[i];
    }
    
    vector<int> myvector (mas, mas+n);
    sort(myvector.begin(), myvector.end());

    copy(myvector.begin(), myvector.end(), mas);
    int count = 0;
    for(int i = 0 ; i < n; i++)
        for(int j = i + 1 ; j < n; j++)
            for(int k = j + 1; k < n; k++) {
                if(mas[k] >= mas[i] + mas[j]) break;
                else count++;
            }

    cout << count;
    return 0;
}