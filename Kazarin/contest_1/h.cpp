#include <iostream>
#include <string>

int used[10];

int main() {
	int n;
	std::string s;
	std::cin >> n >> s;

	for (char c: s) {
		if (c == 'L') {
			int i = 0;
			while (used[i])
				++i;

			used[i] = 1;
		} else if (c == 'R') {
			int i = 9;
			while (used[i])
				--i;

			used[i] = 1;
		} else {
			used[c - '0'] = 0;
		}
	}

	for (int x: used)
		std::cout << x;
	std::cout << '\n';
}