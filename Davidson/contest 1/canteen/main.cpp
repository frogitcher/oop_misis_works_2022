#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main() {
    int n;
    cin >> n;

    vector<int> canteen(n);
    for (int& element : canteen)
    {
        cin >> element;
    }
    reverse(canteen.begin(), canteen.end());
    vector<int> cache;

    for (int& element : canteen) {
        if (!(find(cache.begin(), cache.end(), element) != cache.end())) {
            cache.push_back(element);
        }
    }
    
    cout << cache.back() << endl;
}
