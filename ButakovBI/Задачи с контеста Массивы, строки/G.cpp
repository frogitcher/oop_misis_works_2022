#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::string s;
  std::cin >> s;

  std::vector<int> counts(26);
  for (char c : s) {
    ++counts[tolower(c) - 'a'];
  }

  bool result = none_of(counts.begin(), counts.end(), [&](int c) {return c == 0; });

  //bool result = true;
  //for (int element : counts) {
  // if (element == 0) {
  //      result = false;
  // }
  //}

  std::cout << (result ? "YES" : "NO");

}