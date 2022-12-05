#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <stack>


int main() {
  int mas[200000]{};
  int n = 0, x = 0;
  std::cin >> n;
  while (n) {
    std::cin >> x;
    mas[x] = 1;
    while (mas[n]) {
      std::cout << n-- << " ";
    }
    std::cout << std::endl;
  }
}