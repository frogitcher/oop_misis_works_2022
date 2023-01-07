#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	long int n, kolvo = 0;
	cin >> n;
	vector<long int> v;
	for (long int j = 0; j < n; j += 1) {
		long int a;
		cin >> a;
		v.push_back(a);
	}
	long int max = -1000;
	long int min = 1000000000 + 1;
	for (long int i = 0; i < n; i += 1) {
		if (v[i] > max) {
			max = v[i];
		}
		if (v[i] < min) {
			min = v[i];
		}
	}
	if (max == min) {
		cout << 0;
	}
	else {
		for (long int i = 0; i < n; i += 1) {
			if (v[i] != max && v[i] != min) {
				kolvo += 1;
			}
		}
		cout << kolvo;
	}
	return 0;
}
