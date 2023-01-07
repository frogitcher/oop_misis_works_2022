#include <iostream>
#include <deque>
#include <set>

int main() {
  int n, res = 0, el = 0;
  std::cin >> n;
  std::deque <int> mas;
  std::set <int> seet;
  for (int i = 0; i < n; ++i) {
    std::cin >> el;
    mas.push_back(el);
    seet.insert(el);
  }
  mas.push_front(0);
  std::deque <int>::iterator it = mas.end();
  it--;
  for (it; it != mas.begin(); --it) {
    if (seet.size() == 1) {
      for (std::deque <int>::iterator res = mas.begin(); res != mas.end(); ++res) {
        if (seet.find(*res) != seet.end()) {
          std::cout << *res;
          seet.erase(*res);
          exit;
        }
      }
    }
    else {
      if (seet.find(*it) != seet.end()) {
        seet.erase(*it);
      }
    }
  }
  return 0;
}