#include <iostream>
#include <iomanip>
#include <cmath>

const double kPi = 3.141592653589793;

double Atan(double x) {
  double pw = 1;
  double den = 1;
  double res = 0;

  bool flag = 0;

  if (std::fabs(x) > 1) {
    x = 1 / x;
    flag = 1;
  }

  for (int i = 0; i < 1000; ++i) { 
    double diff = std::pow(x, pw) / den;
    res += i % 2 == 0 ? diff : -diff;

    pw += 2;
    den += 2;
  }

  return flag ? kPi / 2 - res : res;
}

double Atan2(double y, double x) {
  if (x > 0)
    return Atan(y / x);

  if (x < 0 && y >= 0)
    return Atan(y / x) + kPi;

  if (x < 0 && y < 0) 
    return Atan(y / x) - kPi;

  if (x == 0 && y > 0)
    return kPi / 2;

  if (x == 0 && y < 0)
    return -kPi / 2;

  return -54;
}

int main() {
  std::freopen("angle1.in", "r", stdin);
  std::freopen("angle1.out", "w", stdout);

  double x, y;
  std::cin >> x >> y;

  std::cout << std::fixed << std::setprecision(10);
  std::cout << Atan2(y, x) << '\n';
}
