#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

int main() {
	long long t;
	std::cin >> t;
	for (long long i = 0; i < t; ++i) {
		std::string s;
		std::cin >> s;
		std::transform(s.begin(), s.end(), s.begin(), tolower);
		if (s == "yes") {
			std::cout << "YES"<<std::endl;
		}
		else {
			std::cout << "NO"<<std::endl;
		}
	}
}