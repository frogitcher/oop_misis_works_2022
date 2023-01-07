#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

struct Man {
	int id, s;
};

int main() {
	int n;
	std::cin >> n;

	std::vector<Man> men(n);

	for (int i = 0; i < n; ++i) {
		int a, b, c, d;
		std::cin >> a >> b >> c >> d;
		int s = a + b + c + d;
		men[i] = {i + 1, s};
	}

	std::sort(men.begin(), men.end(), [](const Man& l, const Man& r) -> bool {
		if (l.s > r.s)
			return 1;
		else if (l.s < r.s)
			return 0;
		else
			return l.id < r.id;
	});

	int i = 0;
	while (men[i].id != 1)
		++i;

	std::cout << i + 1 << '\n';
}