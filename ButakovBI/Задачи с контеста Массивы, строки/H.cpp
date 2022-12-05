#include <iostream>
#include <string>
#include <vector>

int main() {
  int n = 0;
  std::cin >> n;
  std::vector <char> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back('0');
  }
  for (int i = 0; i < n; ++i) {
    char sym;
    std::cin >> sym;
    if (sym == 'L') {
      for (int i = 0; i < n; ++i) {
        if (v[i] == '0') {
          v[i] = '1';
          break;
        }
      }
    }
    else if (sym == 'R') {
      for (int i = 9; i >= 0; --i) {
        if (v[i] == '0') {
          v[i] = '1';
          break;
        }
      }
    }
    else {
      v[sym - 48] = '0';
    }
  }
  for (auto elem : v) {
    std::cout << elem;
  }
  return 0;
}