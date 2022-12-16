#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	int n;
	cin >> n;
	int k;
	cin >> k;

	int cnt = 0;

	vector<int> q = {};

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		q.push_back(a);
	}

	vector<int>::iterator it;
	if (k >= q.size() - 1) {
		it = max_element(q.begin(), q.end());
	}
	else {
		it = begin(q);
		while (cnt < k)
		{
			if (*it > *(it + 1)) {
				rotate(it + 1, it + 2, q.end());
				cnt++;
			}
			else {
				rotate(it, it + 1, q.end());
				cnt = 1;
			}
		}
	}

	cout << *it << endl;
}