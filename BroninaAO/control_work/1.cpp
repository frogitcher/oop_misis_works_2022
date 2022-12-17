#include "1.h"
#include <iostream>

int main() {
  Brusok elem = { 1, 2, 3, 5 };
  int newlen;
  std::cout << elem.GetLength() << ' ' << elem.GetWidth() << ' ' << elem.GetHeight() << ' ' << elem.GetWeight() << std::endl;
  std::cout << elem.GetVolume() << ' ' << elem.GetDensity() << std::endl;
  std::cin >> newlen;
  elem.SetLength(newlen);
  std::cout << elem.GetLength() << ' ' << elem.GetWidth() << ' ' << elem.GetHeight() << ' ' << elem.GetWeight() << std::endl;
  std::cout << elem.GetVolume() << ' ' << elem.GetDensity();
  return 0;
}