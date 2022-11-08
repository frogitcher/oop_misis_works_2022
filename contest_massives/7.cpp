#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<char> v(26);
	for (int i = 0; i < n; i += 1) {
		char c;
		cin >> c;
		c = tolower(c);
		int n = c - 'a';
		v[n] = 1;
	}
	int f = 0;
	for (int i = 0; i < 26; i += 1) {
		if (f == 0) {
			if (v[i] != 1) {
				f = 1;
				break;
			}
		}
		else { break; }
	}
	if (f == 0) {
		cout << "YES";
	}
	else { cout << "NO"; }
	return 0;
}
