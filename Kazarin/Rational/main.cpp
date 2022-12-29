#include <iostream>

#include "Rational.h"

int main() {
  Rational r_1;
  Rational r_2;

  std::cin >> r_1;
  std::cin >> r_2;

  std::cout << r_1 + r_2 << std::endl;
  std::cout << r_1 - r_2 << std::endl;
  std::cout << r_1 * r_2 << std::endl;
  std::cout << r_1 / r_2 << std::endl;
}
