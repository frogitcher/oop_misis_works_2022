#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> mas1, mas2;

    int count = 0;

    for(int i = 1; i <= sqrt(n); i++) {
        if(i == sqrt(n)) {
            count++;
            mas1.push_back(i);
        }
        else if(n % i == 0) {
            count+=2;
            mas2.insert(mas2.begin(), n/i);
            mas1.push_back(i);
        }
    }
    cout << count << endl;
    for(int i : mas1) cout << i << " ";
    for(int i : mas2) cout << i << " ";
    return 0;
}