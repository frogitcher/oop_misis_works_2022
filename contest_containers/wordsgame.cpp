#include<iostream>
#include<set>
#include<string>
#include<vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	vector<int> rez;
	for (int j = 0; j < t; j += 1) {
		int n;
		cin >> n;
		int summ1 = 0;
		int summ2 = 0;
		int summ3 = 0;
		multiset<string> ms;
		set<string> s1;
		set<string> s2;
		set<string> s3;
		for (int i = 0; i < n; i += 1) {
			string sl;
			cin >> sl;
			ms.insert(sl);
			s1.insert(sl);
		}
		for (int i = 0; i < n; i += 1) {
			string sl;
			cin >> sl;
			ms.insert(sl);
			s2.insert(sl);
		}
		for (int i = 0; i < n; i += 1) {
			string sl;
			cin >> sl;
			ms.insert(sl);
			s3.insert(sl);
		}
		for (string item : s1) {
			if (ms.count(item) == 2) {
				summ1 += 1;
			}
			if (ms.count(item) == 1) {
				summ1 += 3;
			}
		}
		for (string item : s2) {
			if (ms.count(item) == 2) {
				summ2 += 1;
			}
			if (ms.count(item) == 1) {
				summ2 += 3;
			}
		}
		for (string item : s3) {
			if (ms.count(item) == 2) {
				summ3 += 1;
			}
			if (ms.count(item) == 1) {
				summ3 += 3;
			}
		}
		rez.push_back(summ1);
		rez.push_back(summ2);
		rez.push_back(summ3);
	}
	for (int f = 0; f < t * 3; f += 3) {
		cout << rez[f] << ' ' << rez[f + 1] << ' ' << rez[f + 2] << endl;
	}
	return 0;
}
