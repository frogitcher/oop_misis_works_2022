#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	string s;
	cin >> s;

	vector<int> counts(26);
	for (char c : s) {
		if ('a' <= c && c <= 'z') {
			counts[c - 'a']++;
		}
		if ('A' <= c && c <= 'Z') {
			counts[c - 'A']++;
		}
	}
	bool result = true;
	for (int element : counts) {
		if (element == 0) {
			result = false;
		}
	}
	if (result) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}