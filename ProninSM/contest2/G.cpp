#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

int main() {
	long long n, k, t;
	std::cin >> t;

	for (long long q = 0; q < t; ++q) {
		std::cin >> n >> k;
		std::map<long long, std::pair<long long, long long>> mas;
		std::set<long long> s;
		long long x;

		for (int i = 0; i < n; ++i) {
			std::cin >> x;
			if (s.count(x) > 0) {
				mas[x].second = i;
			}
			else {
				mas[x] = std::make_pair(i, i);
				s.insert(x);
			}
		}

		for (long long w = 0; w < k; ++w) {
			long long f, l;
			std::cin >> f >> l;
			if (mas[f].first < mas[l].second) {
				std::cout << "YES" << std::endl;
			}
			else {
				std::cout << "NO" << std::endl;
			}
		}
	}

}