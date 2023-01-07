#include<iostream>
#include<map>
#include<algorithm>
#include<utility>

int main() {
	int n;

	std::cin >> n;

	std::map<int, int> dict;

	for (int i = 0; i < n; ++i) {
		int temp;
		std::cin >> temp;
		if (dict.count(temp) == 0) {
			dict.insert(std::make_pair(temp, i));
		}
		else {
			dict.at(temp) = i;
		}
	}

	long int max = 10000000, index = 0;
	for (auto& t : dict) {
		if (t.second < max) {
			max = t.second;
			index = t.first;
		}
	}

	std::cout << index;

	return 0;
}
