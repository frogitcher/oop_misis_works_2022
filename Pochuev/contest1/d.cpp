#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

int main() {
	int n, a, b, s1, s = 0;

	std::cin >> n >> a >> b >> s1;

	s += s1;

	std::vector<int> arr(n - 1);
	for (auto& elem : arr) {
		std::cin >> elem;
		s += elem;
	}

	if (s1 * a / s >= b) {
		std::cout << 0;
	}
	else {
		std::sort(arr.begin(), arr.end(), [](auto a, auto b) {
			return b < a;
			});

		int count = 0;
		while (s1 * a / s < b) {
			s -= arr[count];
			count += 1;
		}
		std::cout << count;
	}

	return 0;
}