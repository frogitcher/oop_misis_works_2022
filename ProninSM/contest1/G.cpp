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
	long long n;
	std::cin >> n;
	std::string s,ns;
	std::cin >> s;
	std::transform(s.begin(), s.end(), s.begin(), towlower);
	std::vector <int> A(26);
	for (long long i = 0; i < n; ++i) {
		A[s[i] - 'a'] = 1;
	}
	int ans=0;
	for (int i = 0; i < 26; ++i) {
		ans += A[i];
	}
	if (ans == 26) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
}