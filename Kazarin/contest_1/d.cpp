#include <iostream>
#include <vector>
#include <functional>

typedef long long ll;

int main() {
	int n, a, b;
	std::cin >> n >> a >> b;

	std::vector<ll> s(n);

	ll s1;
	std::cin >> s1;
	ll total = s1;

	for (int i = 1; i < n; ++i) {
		std::cin >> s[i];
		total += s[i];
	}

	std::sort(s.begin(), s.end(), std::greater<int>());

	int i = 0;
	while (i < s.size() && s1 * a < total * b) {
		total -= s[i++];
	}

	std::cout << i << '\n';
}