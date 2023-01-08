#include <iostream>
#include <algorithm>
#include <deque>

typedef long long ll;

int cnt[505];

int main() {
	ll n, k;
	std::cin >> n >> k;

	int mx = 0;

	std::deque<int> dq;
	for (int i = 0; i < n; ++i) {
		int x;
		std::cin >> x;

		dq.push_back(x);
		mx = std::max(mx, x);
	}

	if (k >= n) {
		std::cout << mx << '\n';
		return 0;
	}

	for (ll i = 0; i < k * n + 1; ++i) {
		int l = dq.front();
		dq.pop_front();

		int r = dq.front();
		dq.pop_front();

		if (l > r) {
			++cnt[l];
			dq.push_front(l);
			dq.push_back(r);
		} else {
			++cnt[r];
			dq.push_front(r);
			dq.push_back(l);
		}

		if (cnt[l] == k) {
			std::cout << l << '\n';
			return 0;
		} else if (cnt[r] == k) {
			std::cout << r << '\n';
			return 0;
		}
	}

	int ans = 0;
	int mx_cnt = 0;

	for (int i = 1; i <= n; ++i) {
		if (mx_cnt < cnt[i]) {
			mx = cnt[i];
			ans = i;
		}
	}

	std::cout << ans << '\n';
}