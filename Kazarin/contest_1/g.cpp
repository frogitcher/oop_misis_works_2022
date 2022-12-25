#include <iostream>
#include <string>

int cnt[1000];

int main() {
	int n;
	std::string s;
	std::cin >> n >> s;

	for (char c: s) {
		c |= 32;
		++cnt[c];
	}

	for (char i = 'a'; i <= 'z'; ++i) {
		if (cnt[i] == 0) {
			std::cout << "NO\n";
			return 0;
		}
	}

	std::cout << "YES\n";
}