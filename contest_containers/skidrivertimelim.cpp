#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<map>
using namespace std;
int main() {
	int t;
	cin >> t;
	vector<int> rez;
	for (int j = 0; j < t; j += 1) {
		int x = 0;
		int y = 0;
		multimap<int, int> map;
		string str;
		cin >> str;
		int fl1 = 0;
		int fl2 = 0;
		int fl = 0;
		int vr = 0;
		char oldc = '0';
		for (char c : str) {
			map.insert(std::pair<int, int>(x, y));
			for (const pair<int, int>& p : map) {
				if ((p.first == x) && (p.second == y)) {
					fl1 = 1;
				}
			}
			if (c == 'N') {
				y += 1;
				if (oldc == 'N' || oldc == 'S') {
					fl = 1;
				}
			}
			else if (c == 'S') {
				y -= 1;
				if (oldc == 'S' || oldc == 'N') {
					fl = 1;
				}
			}
			else if (c == 'W') {
				x -= 1;
				if (oldc == 'W' || oldc == 'E') {
					fl = 1;
				}
			}
			else {
				x += 1;
				if (oldc == 'E' || oldc == 'W') {
					fl = 1;
				}
			}
			for (const pair<int, int>& p : map) {
				if ((p.first == x) && (p.second == y)) {
					fl2 = 1;
				}
			}
			if ((fl1 == 1) && (fl2 == 1) && (fl == 1)) {
				vr += 1;
			}
			else {
				vr += 5;
			}
			fl1 = 0;
			fl2 = 0;
			fl = 0;
			oldc = c;
		}
		rez.push_back(vr);
	}
	for (int j = 0; j < t; j += 1) {
		cout << rez[j] << endl;
	}
	return 0;
}
