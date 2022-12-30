#include <iostream>
#include <algorithm>

void Solve() {
  int n, c;
  std::cin >> n >> c;

  int a[101];
  std::fill(a, a + 101, 0);

  for (int i = 0; i < n; ++i) {
    int x;
    std::cin >> x;
    ++a[x];
  }

  int ans = 0;

  for (int i = 1; i <= 100; ++i) {
    ans += std::min(c, a[i]);
  }

  std::cout << ans << '\n';
}

int main() {
  int t;
  std::cin >> t;
  for (; t > 0; --t)
    Solve();
}
