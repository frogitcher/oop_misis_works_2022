#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>

const double kNumIters = 1e3;

struct Point {
  double x, y;
};

struct Bomb {
  Point center;
  double r;

  bool Intercept(Point point) const {
    return std::sqrt(std::pow(center.x - point.x, 2) + std::pow(center.y - point.y, 2)) <= r;
  }
};

int main() { 
  int n;
  std::cin >> n;

  std::vector<Bomb> a(n);

  for (int i = 0; i < n; ++i) {
    std::cin >> a[i].center.x >> a[i].center.y >> a[i].r;
  }
  
  const double dx = 1 / kNumIters;
  double area = 0;

  for (int i = 0; i < kNumIters; ++i) {
    for (int j = 0; j < kNumIters; ++j) {
      double x = dx * i;
      double y = dx * j;

      if (std::all_of(a.begin(), a.end(), [=](const Bomb& bomb) {
        return !(bomb.Intercept({x, y})
             && bomb.Intercept({x + dx, y})
             && bomb.Intercept({x, y + dx}) 
             && bomb.Intercept({x + dx, y + dx}));
      })) { 
        area += dx * dx;
      }
    }
  } 

  std::cout << std::fixed << std::setprecision(10);
  std::cout << 100 * (1 - area) << '\n';
}
