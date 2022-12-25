#include <iostream>

int tout[(int) (2 * 1e5) + 5];

int main() {
	int n;
	std::cin >> n;

	for (int i = 1; i <= n; ++i) {
		int x;
		std::cin >> x;
		tout[x] = i;
	}

	int ans = 0;
	int mn_t = 1e9;

	for (int i = 0; i <= 2 * 1e5; ++i) {
		if (tout[i] != 0 && tout[i] < mn_t) {
			ans = i;
			mn_t = tout[i];
		}
	}

	std::cout << ans << '\n';
}