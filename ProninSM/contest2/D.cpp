#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

bool Comparator1(long long a1, long long a2) {
	return a1 < a2;
}
bool Comparator2(long long a1, long long a2) {
	return a1 > a2;
}

int main() {
	long long n;
	std::cin >> n;
	long long f = n;
	std::vector<long long>A;
	long long l = 0;
	for (int i = 0; i < n; ++i) {
		std::vector<long long>ans;
		long long x;
		std::cin >> x;
		if (x == f) {
			ans.push_back(x);
			--f;
			while (l > 0 && A[l - 1] == f) {
				ans.push_back(A[l - 1]);
				--f;
				A.pop_back();
				--l;
			}
			std::sort(ans.begin(), ans.end(), Comparator2);
			for (auto w : ans) {
				std::cout << w << ' ';
			}
			std::cout << std::endl;
		}
		else {
			A.push_back(x);
			++l;
			std::sort(A.begin(), A.end(), Comparator1);
			std::cout << std::endl;
		}
	}
}