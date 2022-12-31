#include <iostream>

int main() {
	long long n, k;
	std::cin >> n >> k;
	long long x, curplayer;
	long long curpoints(0);
	bool winner(true);
	std::cin >> curplayer;
	for (long long i = 1; i < n; ++i) {
		std::cin >> x;
		if (winner) {
			if (x < curplayer) {
				curpoints += 1;
				if (curpoints >= k) {
					winner = false;
				}
			}
			else {
				curplayer = x;
				curpoints = 1;
			}
		}
	}
	std::cout << curplayer;
}