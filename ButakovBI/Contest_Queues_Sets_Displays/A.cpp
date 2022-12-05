#include <iostream>

int main() {
  int n = 0;
  long long k = 0;
  std::cin >> n >> k;
  int first_player;
  std::cin >> first_player;
  int max1 = first_player;
  int cnt = 0;
  for (int i = 1; i < n; i += 1) {
    int a;
    std::cin >> a;
    if (a < max1) {
      cnt += 1;
    }
    else {
      max1 = a;
      cnt = 1;
    }
    if (cnt >= k) {
      std::cout << max1;
      return 0;
    }
  }
  std::cout << max1;
  return 0;
}