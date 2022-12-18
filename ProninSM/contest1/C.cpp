#include <iostream>
#include <vector>
#include<set>
#include<string>
#include<algorithm>

struct Struction {
	int sum;
	int i;
};

bool Comparator(Struction x, Struction y) {
	return x.sum != y.sum ? x.sum > y.sum:x.i < y.i;
}

int main() {
	int n;
	std::cin >> n;
	std::vector <Struction> A(n);
	std::vector <int> B(n);
	for (int i = 0; i < n; ++i) {
		int x1, x2, x3, x4;
		std::cin >> x1 >> x2 >> x3 >> x4;
		A[i].sum=x1+x2+x3+x4;
		A[i].i=i;
	}
	sort(A.begin(), A.end(), Comparator);
	for (int i = 0; i < n; ++i) {
		if (A[i].i == 0) {
			std::cout << i + 1;
			break;
		}
	}
}
