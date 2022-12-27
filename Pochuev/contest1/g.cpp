#include<iostream>
#include<string>
#include<set>

int main() {
	int n;
	std::string str;
	std::set<char>myset;

	std::cin >> n;
	std::cin >> str;

	if (str.size() < 26) {
		std::cout << "NO";
	}
	else {
		for (auto& ch : str)
			myset.insert(std::tolower(ch));
		if (myset.size() == 26) {
			std::cout << "YES";
		}
		else {
			std::cout << "NO";
		}
	}
	return 0;
}
