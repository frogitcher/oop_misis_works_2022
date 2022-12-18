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
	std::vector <long long> A(5);
	for (int i = 0; i < 5; ++i) {
		A[i] = 0;
	}
	std::vector <long long> Ind;
	std::string s;
	long long n;
	std::cin >> n>>s;	
	for (long long i = 0; i < n; ++i) {
		if (s[i] == 'A') {
			A[0] += 1;
		}
		else if (s[i] == 'C') {
			A[1] += 1;
		}
		else if (s[i] == 'G') {
			A[2] += 1;
		}
		else if (s[i] == 'T') {
			A[3] += 1;
		}
		else {
			A[4] += 1;
			Ind.push_back(i);
		}
	}
	std::vector <Gen> Q(4);
	Q[0].g = 'A';
	Q[1].g = 'C';
	Q[2].g = 'G';
	Q[3].g = 'T';

	Q[0].n = A[0];
	Q[1].n = A[1];
	Q[2].n = A[2];
	Q[3].n = A[3];
	sort(Q.begin(), Q.end(), Comparator);

	long long need;
	need = Q[0].n;
	if (n%4!=0 or need * 4 > n) {
		std::cout<< "===";
	}
	else {
		std::vector <char> T;
		need = n / 4;
		for (long long i = 0; i < 4; ++i) {
			while (Q[i].n < need) {
				T.push_back(Q[i].g);
				Q[i].n += 1;
			}
		}
		long long z = 0;
		for (long long i = 0; i < n; ++i) {
			if (s[i] != '?') {
				std::cout << s[i];
			}
			else {
				std::cout << T[z];
				z += 1;
			}
		}
	}
}