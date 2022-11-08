#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> summb;
	vector<int> copy;
	vector<int> top;
	for (int i = 0; i < n; i += 1) {
		int summ = 0;
		for (int j = 0; j < 4; j += 1) {
			int b;
			cin >> b;
			summ += b;
		}
		summb.push_back(summ);
	}
	for (int i = 0; i < n; i += 1) {
		copy.push_back(summb[i]);
	}
	sort(rbegin(summb), rend(summb));
	for (int i = 0; i < n; i += 1) {
		for (int j = 0; j < n; j += 1) {
			if (copy[j] == summb[i]) {
				top.push_back(j + 1);
				copy[j] = -1;
			}
		}
	}
	for (int i = 0; i < n; i += 1) {
		if (top[i] == 1) {
			cout << i + 1;
			break;
		}
	}
	return 0;
}
