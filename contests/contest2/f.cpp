#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

int main() {
	long long t;
	std::cin >> t;
	for (long long q = 0; q < t; q++) {
		std::set<int>s;
		std::map<int, int>m;
		long long ans = 0;
		long long a;
		std::cin >> a;
		for (int i = 1; i <= a; i++) {
			long long x;
			std::cin >> x;
			if (s.count(x) > 0 && m[x] > ans) {
				ans = m[x];
			}
			m[x] = i;
			s.insert(x);
		}
		std::cout << ans << std::endl;
	}
}