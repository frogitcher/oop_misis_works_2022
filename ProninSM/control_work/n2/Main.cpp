#include <iostream>
#include <string>
#include <vector>

std::string Func(const std::string s) {
	int cz = 0, cp = 0;
	std::vector <int> Ap;
	std::vector <int> Az;
	for (int k = 0; k < s.length(); ++k) {
		int i = int(s[k]);
		if (65 <= i && i <= 90) {
			cz += 1;
			Az.push_back(k);
		}
		else if (97 <= i && i <= 122) {
			cp += 1;
			Ap.push_back(k);
		}
	}
	std::string ns;
	int ind = 0;
	if (cz < cp) {
		Az.push_back(s.length());
		for (int i = 0; i < s.length(); ++i) {
			if (i == Az[ind]) {
				ns += (char(int(s[i] + 32)));
				ind += 1;
			}
			else {
				ns += s[i];
			}
		}
	}
	else {
		Ap.push_back(s.length());
		for (int i = 0; i < s.length(); ++i) {
			if (i == Ap[ind]) {
				ns += (char(int(s[i] - 32)));
				ind += 1;
			}
			else {
				ns += s[i];
			}
		}
	}
	return ns;

}

int main() {
	std::string s1 = "a12bcACBaaa";
	std::cout << Func(s1)<<std::endl;
	std::string s2 = "ABC123aba";
	std::cout << Func(s2);
}