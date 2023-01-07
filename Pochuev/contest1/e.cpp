#include<iostream>
#include<string>
#include<vector>

int main() {
	int n;

	std::cin >> n;

	std::vector<std::string>ans(n);
	for (auto& elem : ans) {
		std::string temp;
		std::cin >> temp;
		std::string newstr = { (char)std::tolower(temp[0]), (char)std::tolower(temp[1]), (char)std::tolower(temp[2]) };
		if (newstr == "yes") {
			elem = "yes";
		}
		else {
			elem = "no";
		}
	}
	for (auto& elem : ans) {
		std::cout << elem << '\n';
	}
	return 0;
}
