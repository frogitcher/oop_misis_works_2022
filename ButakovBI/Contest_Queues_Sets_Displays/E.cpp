#include <iostream>
#include <map>

int main() {
  int t = 0;
  std::cin >> t;
  for (int i = 0; i < t; i += 1) {
    int cnt = 0;
    int n = 0, c = 0;
    std::cin >> n >> c;
    std::map<int, int> m;
    for (int i = 0; i < n; i += 1) {
      int a = 0;
      std::cin >> a;
      m[a] += 1;
    }
    //for (int i = 0; i < m.size(); ++i) {
     //   std::cout << m[i] << std::endl;
     //   std::cout << std::endl;   }
  //}
    for (int i = 0; i < m.size(); i += 1) {
      if (m[i] >= c) {
        cnt += c;
      }
      else if (0 < m[i] && m[i] < c) {
        cnt += m[i];
      }
    }
    std::cout << cnt << "\n";
  }
  return 0;
}