#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    int n = 0;
    unsigned long long k = 0;
    cin >> n >> k;
    queue<int> q;
    int curr;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        q.push(curr);
    }
    int player = q.front();
    q.pop();
    int tmp = 0;
    while (tmp != k && tmp != n - 1) {
        int front = q.front();
        q.pop();
        if (front < player) {
            tmp += 1;
            q.push(front);
        }
        else {
            tmp = 1;
            q.push(player);
            player = front;
        }
    }
    cout << player;
}