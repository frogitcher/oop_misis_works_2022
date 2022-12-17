#include <iostream>
#include <map>
#include <cmath>

class Maps {
private:
  std::map <int, int> map1;
  std::map<int, int> map2;

public:

  std::map <int, int> GetMap1() const { return map1; }
  std::map <int, int> GetMap2() const { return map2; }

  void FirstSetTo(int x, int y) {
    map1[x] = y;
  }

  void SecondSetTo(int x, int y) {
    map2[x] = y;
  }

  bool FirstIsSet(int x) const{
    return map1.find(x) != map1.end();
  }
  bool SecondIsSet(int x) const {
    return map2.find(x) != map2.end();
  }
  Maps(std::map <int, int> m1 = {}, std::map<int, int> m2 = {}) {
    map1 = m1;
    map2 = m2;
  }

  std::map<int, int> GetMapIntersection() {
    std::map <int, int> result = map1;
    std::map<int, int>::iterator it = map2.begin();
    for (it; it != map2.end(); ++it) {
      int key = it->first, value = it->second;
      if (result.find(key) == result.end()) { result[key] = value; }
      else { 
        if (abs(result[key]) < abs(value)) result[key] = value;
      }
    }
    return result;
  }
};

int main() {
  Maps elem({ {1, 2}, {4, 4}, {7, 30} }, { {4, 99999}, {6, 4}, {8, 9} });
  std::cout << elem.FirstIsSet(8) << '\n';
  elem.FirstSetTo(8, 15);
  std::cout << elem.GetMap1()[8] << '\n';
  std::cout << elem.GetMapIntersection()[4]; 
  //при объединении по ключу 4 выбирает между 99999 и 4 наибольшее значение - работает
  return 0;
}
  