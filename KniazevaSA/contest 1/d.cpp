#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
	long n, A, B;
	cin >> n >> A >> B;

	int a;
	vector<long> otv;
	long first;
	cin >> first;
	long S = first;
	for (long i = 1; i < n; i++) {
		cin >> a;
		otv.push_back(a);
		S += a;
	}
	long cnt = 0;

	if ((first * A) / S < B) {
		if (otv.size() > 1) {
			sort(otv.begin(), otv.end(), greater<int>());
		}

		for (long i = 0; i < n; i++) {
			if ((first * A) / S < B) {
				S -= otv[i];
				cnt += 1;
			}
		}
	}


	cout << cnt << endl;
}