#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int n = 0, A = 0, B = 0, summ = 0;
  std::cin >> n >> A >> B;
  std::vector<int> holes(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> holes[i];
    summ += holes[i];
  }
  int first_hole = holes[0];
  std::sort(holes.begin() + 1, holes.end());

  int i = n - 1;
  while (i > 0 && (A * holes[0] * 1.0) / summ < B) {
    summ -= holes[i--];
  }
  std::cout << (n - 1) - i;
  return 0;
}