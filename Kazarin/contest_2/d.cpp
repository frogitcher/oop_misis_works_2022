#include <iostream>
#include <functional>
#include <set>

int main() {
  int n;
  std::cin >> n;

  std::set<int, std::greater<int>> st{std::greater<int>{}};
  int nxt = n;

  for (int i = 0; i < n; ++i) {
    int x;
    std::cin >> x;
    st.insert(x);

    if (!st.empty() && *st.begin() == nxt) {
      while (!st.empty() && *st.begin() == nxt) {
        std::cout << nxt-- << ' ';
        st.erase(st.begin());
      }
      
      std::cout << '\n';
    } else {
      std::cout << '\n';
      st.insert(x);
    }
  }

  while (!st.empty() && *st.begin() == nxt) {
    std::cout << nxt++ << ' ';
    st.erase(st.begin());
  }
}
