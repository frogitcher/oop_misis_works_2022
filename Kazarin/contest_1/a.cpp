#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	int n;
	std::cin >> n;

	int mn = 1e9;
	int mx = 0;

	std::vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
		mn = std::min(mn, a[i]);
		mx = std::max(mx, a[i]);
	}

	int ans = 0;

	for (int x: a) {
		if (x != mn && x != mx)
			++ans;
	}

	std::cout << ans << '\n';
}