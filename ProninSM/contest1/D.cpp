#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

struct Struction {
	int r;
	int i;
};

bool Comparator(Struction x, Struction y) {
	return x.r > y.r;
}

int main() {
	long long n, A, B;
	std::cin >> n >> A >> B;
	std::vector <Struction> S(n-1);
	long long s=0;
	long long po;
	std::cin >> po;
	for (long long i = 0; i < n-1; ++i) {
		std::cin >> S[i].r;
		S[i].i = i+1;
		s += S[i].r;
	}
	s += po;
	long long w = po * A;
	long long ans = 0;
	long long as = s;
	sort(S.begin(), S.end(),Comparator);
	long long i = 0;
	while (w < as * B) {
		ans += 1;
		as -= S[i].r;
		++i;
	}
	std::cout << ans;
}