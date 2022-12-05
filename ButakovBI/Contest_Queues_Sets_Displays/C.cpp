#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>


int main() {
  int t;
  std::cin >> t;
  while (t--) {
    std::string s;
    std::cin >> s;
    std::set<std::pair<int, int> > v;
    int a = 0, b = 0, ans = 0;
    for (char x : s) {
      int p = a, q = b;
      if (x == 'N') {
        a++;
      }
      else if (x == 'S') {
        a--;
      }
      else if (x == 'W') {
        b--;
      }
      else {
        b++;
      }
      if (v.count({ p + a, q + b }) == 0) {
        ans += 5, v.insert({ p + a, q + b });
      }
      else {
        ans += 1;
      }
    }
    std::cout << ans << std::endl;
  }
}