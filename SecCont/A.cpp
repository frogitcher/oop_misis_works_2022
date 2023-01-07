#include <iostream>


int main()
{

	int n;
	long long k;
	std::cin >> n >> k;

	int first;
	int second;

	long long cnt = 0;

	std::cin >> first;
	for (int i = 0; i < n - 1; i++) {
		std::cin >> second;
		if (cnt == k)
			break;
		if (first > second) {
			cnt++;
		}
		else {
			cnt = 1;
			first = second;
		}
	}
	std::cout << first;

	return 0;
}
