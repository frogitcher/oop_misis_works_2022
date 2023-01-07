#include<iostream>
#include<vector>
using namespace std;
int main() {
	long int n;
	cin >> n;
	vector<int> v;
	for (int j = 0; j < 10; j += 1) {
		v.push_back(0);
	}
	for (long int i = 0; i < n; i += 1) {
		char c;
		cin >> c;
		int fl = 0;
		if (c == 'L') {
			while (fl != 1) {
				for (int j = 0; j <= 9; j += 1) {
					if (v[j] == 0) {
						v[j] = 1;
						fl = 1;
						break;
					}
				}
			}
		}
		else if (c == 'R') {
			while (fl != 1) {
				for (int j = 9; j >= 0; j -= 1) {
					if (v[j] == 0) {
						v[j] = 1;
						fl = 1;
						break;
					}
				}
			}
		}
		else {
			int ch = c - '0';
			v[ch] = 0;
		}
	}
	for (int i = 0; i <= 9; i += 1) {
		cout << v[i];
	}
	return 0;
}
