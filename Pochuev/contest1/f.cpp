
#include<iostream>
#include<string>
#include<algorithm>

int Count(std::string pstr, const char ch) {
	int count = 0;
	for (auto elem = pstr.cbegin(); elem < pstr.cend(); ++elem) {
		if (*elem == ch) {
			count++;
		}
	}
	return count;
}

int main() {
	int n;

	std::cin >> n;
	std::string str;
	std::cin >> str;
	if (n % 4 != 0)std::cout << "===";
	else {
		int countA = Count(str, 'A'), countC = Count(str, 'C'), countG = Count(str, 'G'), countT = Count(str, 'T');
		if (countA > n / 4 or countC > n / 4 or countG > n / 4 or countT > n / 4) {
			std::cout << "===";
		}
		else {
			if (str.find("?") != -1) {
				while (countA != n / 4 and str.find("?") != -1) {
					str[str.find("?")] = 'A';
					countA++;
				}
				while (countC != n / 4 and str.find("?") != -1) {
					str[str.find("?")] = 'C';
					countC++;
				}
				while (countG != n / 4 and str.find("?") != -1) {
					str[str.find("?")] = 'G';
					countG++;
				}
				while (countT != n / 4 and str.find("?") != -1) {
					str[str.find("?")] = 'T';
					countT++;
				}
				std::cout << str;
			}
			else {
				std::cout << str;
			}
		}
	}
	return 0;
}