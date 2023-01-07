#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i += 1) {
		int ch;
		cin >> ch;
		v.push_back(ch);
	}
	int minmodr = 100000000, ind1 = 0, ind2 = 0;
	for (int i = 0; i < n - 1; i += 1) {
		for (int j = i + 1; j < n; j += 1) {
			if (v[i] > 0 && v[j] > 0) {
				int modr = abs(v[i] - v[j]);
				if (modr < minmodr) {
					minmodr = modr;
					ind1 = i;
					ind2 = j;
				}
			}
		}
	}
	if (ind1 == 0 && ind2 == 0) {
		cout << -1 << ' ' << -1;

	}
	else {
		cout << ind1 << ' ' << ind2;
	}
	return 0;
}