#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mas[n];
    map<int, int> res;
    int a;
    for(int i = 0; i < n; i++) {
        cin >> a;
        res[a]++;
    }
    
    int tmp;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(mas[j] > mas[i]) {
                tmp = mas[i];
                mas[i] = mas[j];
                mas[j] = tmp;
            }
        }
    }
    for(int i : mas) cout << i << " ";

    return 0;
}