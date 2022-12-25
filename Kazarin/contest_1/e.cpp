#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

void Solve() {
	std::string s;
	std::cin >> s;

	std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
		return std::tolower(c);
	});

	std::cout << (s == "yes" ? "YES" : "NO") << '\n';
}

int main() {
	int t;
	std::cin >> t;
	for (; t > 0; --t)
		Solve();
}