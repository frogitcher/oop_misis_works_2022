#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
struct Struction {
	int n;
	int i;
};

bool Comparator(Struction x, Struction y) {
	return x.n != y.n ? x.n<y.n : x.i>y.i;
}

int main() {
	int i, m,n;
	std::cin >> n;
	std::vector <Struction> A(n);
	std::vector <int> B(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> A[i].n;
		A[i].i=i;
	}
	sort(A.begin(), A.end(), Comparator);
	int ans = A[0].n;
	m = A[0].i;
	for (int i = 1; i < n; ++i) {
		if (A[i - 1].n != A[i].n) {
			if (A[i].i < m) {
				m = A[i].i;
				ans = A[i].n;
			}
		}
	}
	std::cout << ans;
}
