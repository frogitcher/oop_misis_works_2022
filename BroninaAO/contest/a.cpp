#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n, miin = 1000000000, maax = -100000;
  std::cin >> n;
  int res = 0;
  std::vector <int> vec(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> vec[i];
    miin = std::min(miin, vec[i]);
    maax = std::max(maax, vec[i]);
  }
  for (int& elem : vec) {
    res += (elem == miin || elem == maax ? 1 : 0);
  }
  std::cout << n - res;
  return 0;
}