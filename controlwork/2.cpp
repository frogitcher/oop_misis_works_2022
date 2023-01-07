#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

pair<int, int> Funct(int n) {
	pair<int, int> p;
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
	if (ind1 == 1 && ind2 == 1) {
		p.first = -1;
		p.second = -1;
		return p;

	}
	else {
		p.first = ind1;
		p.second = ind2;
		return p;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	pair<int, int> pa;
	int k;
	cin >> k;
	pa = Funct(k);
	cout << pa.first << ' ' << pa.second;
	return 0;
}