#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	vector<int> rez;
	for (int j = 0; j < t; j += 1) {
		int n, c;
		int summ = 0;
		cin >> n >> c;
		multiset<int> ms;
		set<int> s;
		for (int i = 0; i < n; i += 1) {
			int a;
			cin >> a;
			ms.insert(a);
			s.insert(a);
		}
		for (int item : s) {
			int k = ms.count(item);
			if (c < k) {
				summ += c;
			}
			else { summ += k; }
		}
		rez.push_back(summ);
	}
	for (int j = 0; j < t; j += 1) {
		cout << rez[j] << endl;
	}
	return 0;
}
