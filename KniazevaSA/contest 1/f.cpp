#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
	int n;
	string s;
	const char G = 'G';
	const char A = 'A';
	const char C = 'C';
	const char T = 'T';
	const char q = '?';
	string str = "===";
	cin >> n;
	getline(cin, s);
	getline(cin, s);
	if (n % 4 == 0) {
		int cnt = n / 4;
		int cntG = 0;
		int cntA = 0;
		int cntC = 0;
		int cntT = 0;
		int cntq = 0;
		for (int i = 0; i < n; i++) {
			switch (s[i]) {
			case G:
				cntG++;
				break;
			case A:
				cntA++;
				break;
			case C:
				cntC++;
				break;
			case T:
				cntT++;
				break;
			case q:
				cntq++;
				break;
			default:
				break;
			}
		}
		if ((cntG <= cnt) &&
			(cntA <= cnt) &&
			(cntC <= cnt) &&
			(cntT <= cnt)) {

			while (cntG < cnt || cntA < cnt || cntC < cnt || cntT < cnt) {
				if (cntG < cnt) {
					s.replace(s.find(q), 1, 1, G);
					cntG++;
				}
				if (cntA < cnt) {
					s.replace(s.find(q), 1, 1, A);
					cntA++;
				}
				if (cntC < cnt) {
					s.replace(s.find(q), 1, 1, C);
					cntC++;
				}
				if (cntT < cnt) {
					s.replace(s.find(q), 1, 1, T);
					cntT++;
				}
			}
		}
		else {
			s = str;
		}
	}
	else {
		s = str;
	}

	cout << s << endl;
}