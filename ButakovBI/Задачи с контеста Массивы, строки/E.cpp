#include <iostream>
#include <string>

std::string up(std::string& s) {
  std::string ans = "";
  for (int i = 0; i < s.length(); ++i) {
    ans += toupper(s[i]);
  }
  return ans;
}

int main()
{
  int n;
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    std::string s;
    std::cin >> s;
    if (up(s) == "YES") {
      std::cout << "YES" << "\n";
    }
    else {
      std::cout << "NO" << "\n";
    }
  }
  return 0;
}