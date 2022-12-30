#include <iostream>
#include <map>
#include <set>
#include <string>
#include <algorithm>

int score[3];

void Solve() {
  int n;
  std::cin >> n;

  std::fill(score, score + 3, 0);
  std::map<std::string, std::set<int>> mp;

  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < n; ++j) {
      std::string word;
      std::cin >> word;

      mp[word].insert(i);
    }
  }

  for (auto& i: mp) {
    if (i.second.size() == 3) {
      continue;
    } else if (i.second.size() == 2) {
      for (int id: i.second)
        ++score[id];
    } else if (i.second.size() == 1) {
      score[*(i.second.begin())] += 3;
    }
  }

  for (int i = 0; i < 3; ++i) {
    std::cout << score[i] << ' ';
  }

  std::cout << '\n';
}

int main() {
  int t;
  std::cin >> t;
  for (; t > 0; --t) {
    Solve();
  }  
}
