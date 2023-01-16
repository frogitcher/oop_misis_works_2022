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
		std::map<long long, long long>m;
		std::set<long long>s;
		long long n, c;
		std::cin >> n >> c;
		long long p;
		for (int i = 0; i < n; i++) {
			std::cin >> p;
			if (s.count(p) > 0) {
				m[p] = c < (m[p] + 1) ? c : (m[p] + 1);
			}
			else {
				m[p] = 1;
				s.insert(p);
			}
		}
		long long ans = 0;
		for (auto i : m) {
			ans += i.second;
		}
		std::cout << ans << std::endl;
	}

}