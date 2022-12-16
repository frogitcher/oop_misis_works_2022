#include <iostream>

using namespace std;

int main()
{
    int n, k;
    int j, i;
    cin >> n;
    cin >> k;
    int mas[n];
    for(int i = 0; i < n; i++) cin >> mas[i];

    int tmp;
    for(i = 0; i < k; i++) {
        for(j = i; j < n; j++) {
            if(mas[j] > mas[i]) {
                tmp = mas[i];
                mas[i] = mas[j];
                mas[j] = tmp;
            }
        }
    }
    cout << mas[i - 1];

    return 0;
}