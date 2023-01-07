#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	long int n, a, b;
	cin >> n >> a >> b;
	vector<long int> v;
	for (long int i = 0; i < n; i += 1) {
		long int s;
		cin >> s;
		v.push_back(s);
	}
	long int v1 = v[0];
	v.erase(v.begin() + 0);
	sort(rbegin(v), rend(v));
	long int summ = v1;
	for (long int i = 0; i < n - 1; i += 1) {
		summ += v[i];
	}
	long int kolvo = 0, ind = 0;
	while ((double(v1 * a) / summ) < b) {
		kolvo += 1;
		summ -= v[ind];
		ind += 1;
	}
	cout << kolvo;
	return 0;
}
