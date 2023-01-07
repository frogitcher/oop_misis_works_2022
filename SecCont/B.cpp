#include <iostream>
#include <set>
#include <string>

void round() {
	int n;
	std::cin >> n;
	std::set<std::string> first_set;
	std::set<std::string> second_set;
	int first_summ = n * 3;
	int second_summ = n * 3;
	int third_summ = n * 3;
	for (int i = 0; i < n; i++) {
		std::string k;
		std::cin >> k;
		first_set.insert(k);
	}
	for (int i = 0; i < n; i++) {
		std::string k;
		std::cin >> k;
		second_set.insert(k);
	}
	for (int i = 0; i < n; i++) {
		std::string k;
		std::cin >> k;
		if (first_set.find(k) != first_set.end()) {
			if (second_set.find(k) != second_set.end()) {
				first_summ -= 1;
				second_summ -= 1;
				third_summ -= 3;
			}
			else {
				first_summ -= 2;
				third_summ -= 2;
			}
		}
		else if (second_set.find(k) != second_set.end()) {
			second_summ -= 2;
			third_summ -= 2;
		}
	}
	for (auto p : second_set) {
		if (first_set.find(p) != first_set.end()) {
			first_summ -= 2;
			second_summ -= 2;
		}
	}
	std::cout << first_summ << " " << second_summ << " " << third_summ << std::endl;
}

int main()
{

	int t;
	std::cin >> t;
	for (int i = 0; i < t; ++i) {
		round();
	}

	return 0;
}