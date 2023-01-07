#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
	int n;
	string s;
	string Y = "YES";
	string N = "NO";
	cin >> n;
	getline(cin, s);

	vector<string> powers(n);
	for (string& element : powers) {
		getline(cin, element);
		transform(element.begin(), element.end(), element.begin(), ::toupper);
	}
	cout << endl;
	for (string& element : powers) {
		if (element.compare(Y) == 0) {
			cout << Y << endl;
		}
		else {
			cout << N << endl;
		}

	}
}