#include <iostream>
#include <string>
#include <map>
#include <set>
#include <utility>

typedef std::pair<int, int> Pos;

char Rev(char c) {
  if (c == 'N') return 'S';
  if (c == 'S') return 'N';
  if (c == 'E') return 'W';
  if (c == 'W') return 'E';

  return 0;
}
void Solve() {
	std::string s;
	std::cin >> s;

	int x = 0, y = 0;
	int ans = 0;

  std::map<Pos, std::set<char>> mp;

  for (char c: s) {
    Pos ps{x, y};

    if (mp[ps].find(c) != mp[ps].end()) {
      ans += 1;
    } else {
      ans += 5;
      mp[ps].insert(c);
    }

    if (c == 'E') --x;
    if (c == 'W') ++x;
    if (c == 'S') --y;
    if (c == 'N') ++y;

    ps = {x, y};
    mp[ps].insert(Rev(c));
  }  

	std::cout << ans << '\n';
}

int main() {
	int t;
	std::cin >> t;
	for (; t > 0; --t)
		Solve();
}
