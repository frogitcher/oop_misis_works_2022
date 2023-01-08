#include <iostream>
#include <vector>
#include <utility>
#include <map>

void Solve() {
  int n, k;
  std::cin >> n >> k;
  
  std::map<int, std::pair<int, int>> times;
  for (int i = 1; i <= n; ++i) {
    int u;
    std::cin >> u;

    if (times.find(u) == times.end()) {
      times[u].first = times[u].second =  i;
    } else {
      times[u].second = i;
    }
  }

  for (int i = 0; i < k; ++i) {
    int a, b;
    std::cin >> a >> b;

    if (times.find(a) == times.end() || times.find(b) == times.end())
      std::cout << "NO\n";
    else
      std::cout << (times[a].first <= times[b].second ? "YES" : "NO") << '\n';
  }
}

int main() {
  int t;
  std::cin >> t;
  for (; t > 0; --t)
    Solve();
}
