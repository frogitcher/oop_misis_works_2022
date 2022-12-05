#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n;
	int a = 0, b = 0, c = 0, d = 0, son = 0;
	std::cin >> n;
	std::cin >> a >> b >> c >> d;
	son = a + b + c + d;

	int ans = 1;
	for (int i = 1; i < n; ++i) {
		std::cin >> a >> b >> c >> d;
		if (a + b + c + d > son) {
			ans += 1;
		}
	}

	std::cout << ans;
	return 0;
}