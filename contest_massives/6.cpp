#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<char> v;
	vector<char> newv;
	int ka = 0, kc = 0, kg = 0, kt = 0, kvopr = 0;
	for (int i = 0; i < n; i += 1) {
		char c;
		cin >> c;
		v.push_back(c);
		if (c == 'A') {
			ka += 1;
		}
		else if (c == 'C') {
			kc += 1;
		}
		else if (c == 'G') {
			kg += 1;
		}
		else if (c == 'T') {
			kt += 1;
		}
		else {
			kvopr += 1;
		}
	}
	if (n % 4 != 0) {
		cout << "===";
	}
	else if ((ka > n / 4) || (kt > n / 4) || (kg > n / 4) || (kc > n / 4)) {
		cout << "===";
	}
	else if (kvopr == 0) {
		for (int j = 0; j < n; j += 1) {
			cout << v[j];
		}
	}
	else {
		int nk = n / 4;
		ka = nk - ka;
		kg = nk - kg;
		kc = nk - kc;
		kt = nk - kt;
		for (int j = 0; j < n; j += 1) {
			if (v[j] == '?') {
				if (ka != 0) {
					newv.push_back('A');
					ka -= 1;
				}
				else if (kc != 0) {
					newv.push_back('C');
					kc -= 1;
				}
				else if (kg != 0) {
					newv.push_back('G');
					kg -= 1;

				}
				else if (kt != 0) {
					newv.push_back('T');
					kt -= 1;
				}
			}
			else { newv.push_back(v[j]); }
		}
		for (int i = 0; i < n; i += 1) {
			cout << newv[i];
		}
	}
	return 0;
}
