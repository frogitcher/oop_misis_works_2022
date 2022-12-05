#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
  int n = 0, sum = 0;
  std::string s, language = "ACGT";
  std::cin >> n >> s;

  if (n % 4) {
    std::cout << "===";
    return 0;
  }

  for (int i = 0; i < 4; ++i) {
    sum = n / 4 - std::count(s.begin(), s.end(), language[i]);
    if (sum > std::count(s.begin(), s.end(), '?')) {
      std::cout << "===";
      return 0;
    }
    for (int j = 0; j < sum; ++j) {
      s[s.find('?')] = language[i];
    }
  }
  std::cout << s;
  return 0;
}