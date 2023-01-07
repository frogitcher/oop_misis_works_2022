#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	vector<int> status(10);
	int n;
	string s;
	cin >> n;
	getline(cin, s);
	getline(cin, s);
	char L = 'L';
	char R = 'R';

	if ((s.find(L) != string::npos) ||
		(s.find(R) != string::npos)) {
		for (int i = 0; i < n; i++) {
			char ch = s[i];
			switch (ch)
			{
			case 'L':
				for (int j = 0; j < status.size(); j++) {
					if (status[j] == 0) {
						status[j] = 1;
						break;
					}
				}
				break;
			case 'R':
				for (int k = status.size() - 1; k >= 0; --k) {
					if (status[k] == 0) {
						status[k] = 1;
						break;
					}
				}
				break;
			case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7':case '8': case '9':
				status[atoi(&ch)] = 0;
				break;
			default:
				break;
			}
		}
	}

	for (int const& i : status) {
		cout << i;
	}
	cout << endl;
}