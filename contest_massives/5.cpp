#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	vector<string> rez;
	for (int q = 0; q < t; q += 1) {
		string s;
		cin >> s;
		vector<char> v;
		int dl = s.size();
		for (int i = 0; i < dl; i += 1) {
			v.push_back(s[i]);
		}
		if (dl > 3 || dl < 3) {
			rez.push_back("NO");
		}
		else {
			if (v[0] == 'y' || v[0] == 'Y') {
				if (v[1] == 'e' || v[1] == 'E') {
					if (v[2] == 's' || v[2] == 'S') {
						rez.push_back("YES");
					}
					else { rez.push_back("NO"); }
				}
				else { rez.push_back("NO"); }
			}
			else { rez.push_back("NO"); }
		}
	}
	for (int q = 0; q < t; q += 1) {
		cout << rez[q] << endl;
	}
	return 0;
}
