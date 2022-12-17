#include <iostream>
#include <cmath>
#include <iomanip>

double F(double x) {
  return std::sin(x);
}

int main() {
  double left = 0, right = 1;
  int iterations = 30000;
  int cnt_inside = 0;
  for (int i = 0; i < iterations; ++i) {
    for (int j = 0; j < iterations; ++j) {
      double x = (right - left) / iterations * i;
      double y = (right - left) / iterations * j;
      cnt_inside += (F(x) <= y);
    }
  }
  double part = (double) cnt_inside / (iterations * iterations);
  std::cout << std::fixed << std::setprecision(6) << part;
}

//0.540300