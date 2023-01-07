#include<iostream>
using namespace std;
int main() {
	long long n, k;
	long long pob = 0, perv;
	cin >> n >> k;
	cin >> perv;
	for (long long i = 1; i < n; i += 1) {
		long long a;
		cin >> a;
		if (pob == k) {
			break;
		}
		if (perv > a) {
			pob += 1;
		}
		else {
			perv = a;
			pob = 1;
		}
	}
	cout << perv << endl;
	return 0;
}
