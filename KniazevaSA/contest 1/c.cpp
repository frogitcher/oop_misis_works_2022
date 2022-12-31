#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	int a, b, c, d;
	vector<int> res;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c >> d;
		res.push_back(a + b + c + d);
	}
	int t = res[0];
	int r = 1111;
	sort(res.begin(), res.end());
	reverse(res.begin(), res.end());
	for (int i = 0; i < n; i++) {
		if (res[i] == t) {
			r = i + 1;
			cout << r << endl;
		}
		if (r != 1111)
			break;
	}
}