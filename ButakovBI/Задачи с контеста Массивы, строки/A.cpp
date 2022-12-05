#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;
	vector<int> sum;
	for (int i = 0; i < n; ++i) {
		int a = 0, b = 0, c = 0, d = 0;
		std::cin >> a >> b >> c >> d;
		sum.push_back(a + b + c + d);
	}
	std::cout << std::max(sum.begin(), sum.end()) << "\n";
	return 0;
}