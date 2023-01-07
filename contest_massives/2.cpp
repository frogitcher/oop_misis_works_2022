#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long int n;
	cin >> n;
	set<long int> s;
	vector<long int> all;
	for (long int i = 0; i < n; i += 1) {
		long int a;
		cin >> a;
		all.push_back(a);
	}
	if (n == 1 || n == 2) {
		cout << all[0];
	}
	else {
		long int nom = 0;
		for (long int j = n - 1; j >= 0; j -= 1) {
			long int dl = s.size();
			s.insert(all[j]);
			if (s.size() > dl) {
				nom = all[j];
			}
		}
		cout << nom;
	}
	return 0;
}
