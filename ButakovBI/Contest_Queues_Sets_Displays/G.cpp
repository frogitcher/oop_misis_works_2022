#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>


int main() {
  int t = 0;
  std::cin >> t;
  for (int i = 0; i < t; i += 1) {
    int n = 0, k = 0;
    std::cin >> n >> k;
    std::map<int, int> min_map, max_map;
    for (int i = 0; i < n; i += 1) {
      int u = 0;
      std::cin >> u;
      if (min_map[u]) {
        max_map[u] = i + 1;
      }
      else {
        min_map[u] = i + 1;
        max_map[u] = i + 1;
      }

    }
    for (int i = 0; i < k; i += 1) {
      int a = 0, b = 0;
      std::cin >> a >> b;
      if (min_map[a] && min_map[a] < max_map[b]) {
        std::cout << "YES" << std::endl;
      }
      else {
        std::cout << "NO" << std::endl;
      }
    }
  }
}