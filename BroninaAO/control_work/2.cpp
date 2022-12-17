#include <iostream>


std::string f(std::string s) {
  int cntA = 0, cnta = 0;
  for (int i = 0; i < s.size(); ++i) {
    if ('A' <= s[i] && s[i] <= 'Z') {
      cntA++;
    }
    else {
      if ('a' <= s[i] && s[i] <= 'z') {
        cnta++;
      }
    }
  }
  if (cnta > cntA) {
    for (int i = 0; i < s.size(); ++i) {
      if ('A' <= s[i] && s[i] <= 'Z') {
        s[i] = 'a' + (s[i] - 'A');
      }
    }
  }
  else {
    for (int i = 0; i < s.size(); ++i) {
      if ('a' <= s[i] && s[i] <= 'z') {
        s[i] = 'A' + (s[i] - 'a');
      }
    }
  }
  return s;
}
int main() {
  std::string strok;
  std::cin >> strok;
  std::cout << f(strok) << '\n' << f("123lalalPRIVET!@#hey") << '\n' << f("hApPyNewyEAR");
  return 0;
}