#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

int main() {
	int i, m, n;
	std::cin >> n;
	std::vector <int> A(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> A[i];
	}
	std::sort(A.begin(), A.end());	
	int ans = 0;
	for (int i = 0; i < n - 1; ++i) {
		if (A[i] > A[0] and A[i] < A[n - 1]) {
			ans += 1;
		}
	}
	std::cout << ans;
}
