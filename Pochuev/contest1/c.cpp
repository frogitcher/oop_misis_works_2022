#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

int main() {
	int n;

	std::cin >> n;

	std::vector<std::pair<int, int>> arr(n);
	std::pair<int, int>tomas;
	{
		int a, b, c, d;
		std::cin >> a >> b >> c >> d;
		tomas = std::make_pair(1, a + b + c + d);
	}

	arr[0] = tomas;

	for (int i = 2; i <= n; i++) {
		int a, b, c, d;
		std::cin >> a >> b >> c >> d;
		arr[i - 1] = std::make_pair(i, a + b + c + d);
	}

	sort(arr.rbegin(), arr.rend(), [](auto a, auto b) {
		if (a.second == b.second) {
			return a.first > b.first;
		}
		return a.second < b.second;
	});

	for (int i = 0; i < n; i++)
		if (arr[i] == tomas) {
			std::cout << i + 1;
			break;
		}

	return 0;
}