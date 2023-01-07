#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	vector<int> otv;
	for (int j = 0; j < t; j += 1) {
		int n;
		cin >> n;
		vector<int> zn;
		set<int> s;
		int izm = 0;
		for (int i = 0; i < n; i += 1) {
			int a;
			cin >> a;
			zn.push_back(a);
		}
		int fl = 0;
		for (int i = n - 1; i >= 0; i -= 1) {
			if (fl == 0) {
				int nachdl = s.size();
				s.insert(zn[i]);
				int dl = s.size();
				if (dl == nachdl) {
					izm = i + 1;
					otv.push_back(izm);
					fl = 1;
				}
			}
		}
		if (zn.size() == s.size()) {
			otv.push_back(0);
		}
	}
	for (int j = 0; j < t; j += 1) {
		cout << otv[j] << endl;
	}
	return 0;
}
