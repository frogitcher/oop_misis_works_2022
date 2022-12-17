#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

string f(string s) {
	vector<int> down, up;
	int len = s.length();
	int c_down = 0, c_up = 0, num;
	for (int i = 0; i < len; i++) {
		num = int(s[i]);
		if (num >= 65 && num <= 90) {
			c_up++;
			up.push_back(i);
			continue;
		}
		else if (num >= 97 && num <= 122) {
			c_down++;
			down.push_back(i);
			continue;
		}
		else continue;
	}
	if (c_down > c_up) {
		for (int i = 0; i < up.size(); i++) {
			s[up[i]] = char(int(s[up[i]]) + 32);
			//cout << s[up[i]] << ' ';
		}
		return s;
	}
	for (int i = 0; i < down.size(); i++) {
		s[down[i]] = char(int(s[down[i]]) - 32);
		//cout << s[down[i]] << ' ';
	}
	return s;
}
int main() {
	string s;
	cin >> s;
	cout<<f(s);
}

