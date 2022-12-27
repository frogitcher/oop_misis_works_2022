//этот контест решал поздно ночью, так что решение может быть не самым простым, но я могу сделать проще
#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	int n;

	std::cin >> n;

	std::vector<int> arr(n);

	for (auto& elem : arr) {
		std::cin >> elem;
	}
	std::sort(arr.begin(), arr.end(), [](int a, int b) {return b < a; });

	int count = 0;
	for (auto elem = arr.rbegin() + 1; *elem < *(arr.rend() - 1); elem++)
		if (*elem > *arr.rbegin()) {
			count++;
		}
	std::cout << count;

	return 0;
}