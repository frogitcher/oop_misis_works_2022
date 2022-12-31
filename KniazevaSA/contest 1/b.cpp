#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;

int main() {
	long n;
	cin >> n;
	vector<long> powers(n);
	for (long& element : powers) {
		cin >> element;
	}
	int result = powers[0];

	if (n > 2) {
		vector<long> rpowers;
		unordered_set<long> rst;
		for (vector<long>::reverse_iterator it = powers.rbegin(); it != powers.rend(); it++) {
			auto pos = rst.find(*it);
			if (pos == rst.end()) {
				rpowers.push_back(*it);
				rst.insert(*it);
			}
		}
		result = *rpowers.rbegin();
	}


	cout << result << endl;
}