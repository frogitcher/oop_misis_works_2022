#include <iostream>
#include <vector>
#include <set>

void Solve() {
  int n;
  std::cin >> n;

  std::vector<int> a(n);
  for (int i = 0; i < n; ++i)
    std::cin >> a[i];

  std::set<int> st;
  for (int i = n - 1; i >= 0; --i) {
    if (st.find(a[i]) != st.end()) {
      std::cout << i + 1 << '\n';
      return;
    } else {
      st.insert(a[i]);
    }
  }

  std::cout << 0 << '\n';
}

int main() {
  int t;
  std::cin >> t;
  for (; t > 0; --t)
    Solve();
}
