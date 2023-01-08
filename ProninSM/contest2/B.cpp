#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool eq(std::string s1, std::string s2) {
	return s1[0] == s2[0] && s1[1] == s2[1] && s1[2] == s2[2];
}
bool comparator(std::string s1, std::string s2) {
	return s1 < s2;
}
bool operator==(std::string s1, std::string s2) {
	return s1[0] == s2[0] && s1[1] == s2[1] && s1[2] == s2[2];
}
bool operator<(std::string s1, std::string s2) {
	for (int i = 0; i < 3; ++i) {
		if (s1[i] < s2[i]) {
			return true;
		}
		if (s1[i] > s2[i]) {
			return false;
		}
	}
	return false;
}

int main() {
	long long t, n;
	std::cin >> t;
	for (int q = 0; q < t; ++q) {
		std::cin >> n;
		std::vector <std::string> A1, A2, A3;
		std::string s;

		for (int i = 0; i < n; ++i) {
			std::cin >> s;
			A1.push_back(s);
		}
		for (int i = 0; i < n; ++i) {
			std::cin >> s;
			A2.push_back(s);
		}
		for (int i = 0; i < n; ++i) {
			std::cin >> s;
			A3.push_back(s);
		}

		std::sort(A1.begin(), A1.end(), comparator);
		std::sort(A2.begin(), A2.end(), comparator);
		std::sort(A3.begin(), A3.end(), comparator);

		long long points1(0), points2(0), points3(0);
		int i1(0), i2(0), i3(0);
		std::string c1, c2, c3;

		while (i1 < n && i2 < n && i3 < n) {
			c1 = A1[i1];
			c2 = A2[i2];
			c3 = A3[i3];

			if (c1 < c2 && c1 < c3) {
				points1 += 3;
				++i1;
			}
			else if (c2 < c3 && c2 < c1) {
				points2 += 3;
				++i2;
			}
			else if (c3 < c1 && c3 < c2) {
				points3 += 3;
				++i3;
			}
			else if (c1 == c2) {
				if (c1 == c3) {
					++i1;
					++i2;
					++i3;
				}
				else {
					++points1;
					++points2;
					++i1;
					++i2;
				}
			}
			else if (c1 == c3) {
				++points1;
				++points3;
				++i1;
				++i3;
			}
			else if (c2 == c3) {
				++points3;
				++points2;
				++i3;
				++i2;
			}
		}


		bool twomas(false);
		int& u1 = i1;
		int& u2 = i2;
		std::vector<std::string>& mas1 = A1;
		std::vector<std::string>& mas2 = A2;
		long long& firstpoints = points1;
		long long& secondpoints = points2;
		if (i1 < n) {
			if (i2 < n) {
				int& u1 = i1;
				int& u2 = i2;
				std::vector<std::string>& mas1 = A1;
				std::vector<std::string>& mas2 = A2;
				long long& firstpoints = points1;
				long long& secondpoints = points2;
				twomas = true;
			}
			if (i3 < n) {
				int& u1 = i1;
				int& u2 = i3;
				std::vector<std::string>& mas1 = A1;
				std::vector<std::string>& mas2 = A3;
				long long& firstpoints = points1;
				long long& secondpoints = points3;
				twomas = true;
			}
		}
		if (i2 < n && i3 < n) {
			int& u1 = i2;
			int& u2 = i3;
			u1 = 1;
			std::vector<std::string>& mas1 = A2;
			std::vector<std::string>& mas2 = A3;
			long long& firstpoints = points2;
			long long& secondpoints = points3;
			twomas = true;
		}
		if (twomas) {
			while (u1 < n && u2 < n) {
				c1 = mas1[u1];
				c2 = mas2[u2];
				if (c1 < c2) {
					++u1;
					firstpoints += 3;
				}
				else if (c2 < c1) {
					++u2;
					secondpoints += 3;
				}
				else {
					++u1;
					++u2;
					++firstpoints;
					++secondpoints;
				}
			}
		}

		points1 += 3 * (n - i1);
		points2 += 3 * (n - i2);
		points3 += 3 * (n - i3);

		std::cout << points1 << ' ' << points2 << ' ' << points3 << std::endl;

	}
}