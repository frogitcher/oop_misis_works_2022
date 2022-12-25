#include <iostream>
#include <string>

int cnt[1000];

int main() {
	int n;
	std::string s;
	std::cin >> n >> s;

	if (n % 4 != 0) {
		std::cout << "===\n";
		return 0 ;
	}

	for (char c: s) {
		++cnt[c];
	}

	if (cnt['A'] > n / 4 || cnt['C'] > n / 4 || cnt['G'] > n / 4 || cnt['T'] > n / 4) {
		std::cout << "===\n";
		return 0;
	}

	for (int i = 0; i < n; ++i) {
		if (s[i] != '?')
			continue;

		if (cnt['A'] < n / 4) {
			s[i] = 'A';
			++cnt['A'];
		} else if (cnt['C'] < n / 4) {
			s[i] = 'C';
			++cnt['C'];
		} else if (cnt['G'] < n / 4) {
			s[i] = 'G';
			++cnt['G'];
		} else {
			s[i] = 'T';
			++cnt['T'];
		}
	}

	std::cout << s << '\n';
}