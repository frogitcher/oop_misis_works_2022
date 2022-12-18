#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

struct Gen {
	long long n;
	char g;
};

bool Comparator(Gen x, Gen y) {
	return x.n > y.n;
}

int main() {
	std::vector <long long> A(10);
	long long n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	for (long long i = 0; i < n; ++i) {
		if (s[i] == 'L'){
			for (int z = 0; z < 10; ++z) {
				if (A[z] == 0) {
					A[z] = 1;
					break;
				}
			}
		}
		else if (s[i] == 'R') {
			for (int z = 9; z >= 0; --z) {
				if (A[z] == 0) {
					A[z] = 1;
					break;
				}
			}
		}
		else {
			int sdv=48;
			int w = (int)s[i]-sdv;
			A[w] = 0;
		}
	}
	for (int i = 0; i < 10; ++i) {
		std::cout << A[i];		
	}
}