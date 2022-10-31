#include <iostream>
#include <vector>
#include <set>

int main() {

  int n = 0;
  std::cin >> n;
  std::vector<int> cafeteria_v;
  std::set<int> cafeteria_set;

  for (int i = 0; i < n; ++i) {
    int a = 0;
    std::cin >> a;
    cafeteria_set.insert(a);
    cafeteria_v.push_back(a);
  }


  int ans = -1;
  std::set<int> new_set;
  for (int j = n - 1; j >= 0; --j) {
    new_set.insert(cafeteria_v[j]);
    if (new_set.size() == cafeteria_set.size()) {
      ans = cafeteria_v[j];
      break;
    }
  }
  if (ans == -1) {
    ans = cafeteria_v[0];
  }
  std::cout << ans << "\n";
  return 0;
}