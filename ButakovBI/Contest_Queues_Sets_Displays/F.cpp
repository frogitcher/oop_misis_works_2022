#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>

void f(std::set<int> s, int n, std::vector<int> v) {
  for (int i = n - 1; i >= 0; i -= 1) {
    if (s.find(v[i]) == s.end()) {
      s.insert(v[i]);
    }
    else {
      std::cout << i + 1 << "\n";
      return;
    }
  }
  if (s.size() == n) {
    std::cout << 0 << std::endl;
  }
}

int main() {
  int t = 0;
  std::cin >> t;
  for (int i = 0; i < t; i += 1) {
    int n = 0;
    std::cin >> n;
    std::vector<int> v;
    for (int i = 0; i < n; i += 1) {
      int a = 0;
      std::cin >> a;
      v.push_back(a);
    }
    std::set<int> s;
    f(s, n, v);
  }
}