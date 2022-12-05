#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>


int main() {
  int t, n;
  std::cin >> t;
  while (t--) {
    std::cin >> n;
    std::vector<std::string> A(3 * n);
    std::map<std::string, int> M;
    std::vector<int> S(3);
    for (auto& a : A) {
      std::cin >> a;
      M[a]++;
    }
    for (int i = 0; i < 3 * n; i++)
      switch (M[A[i]]) {
      case 1: S[i / n] += 2;
      case 2: S[i / n] += 1;
      }
    for (auto s : S) {
      std::cout << s << ' ';
    }
    std::cout << '\n';
  }
}