#include <iostream>
#include <vector>

using namespace std;
const int M = 2e5 + 100;

int a[M];
int book[M] = {0};

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        book[a[i]] = i; // save the time of last occurrence of each store
    }
    int p, ans = M + 10;
    for (int i = 1; i <= n; i++) {
        if (book[a[i]] < ans && book[a[i]] != 0) // If this time the store last seen earlier
        {
            ans = book[a[i]];
            p = a[i]; // this store able to save
        }
    }
    cout << p;
}