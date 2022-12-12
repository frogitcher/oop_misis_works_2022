#include "Rational.h"
#include <vector>
#include <string>

void one() {
  Rational a, b;
  std::cin >> a >> b;
  std::cout << a + b << '\n' << a - b << '\n' << a * b << '\n' << a / b << std::endl;
}

void two() {
  Rational a, b;
  std::cin >> a >> b;
  if (a == b) {
    std::cout << "Yes" << ' ';
  }
  else std::cout << "No" << ' ';
  if (a != b) {
    std::cout << "Yes" << std::endl;
  }
  else std::cout << "No" << std::endl;
}

void three() {
  Rational a, b;
  std::cin >> a >> b;
  if (a < b) {
    std::cout << b << ' ';
  }
  else std::cout << a << ' ';
  if (a > b) {
    std::cout << b << std::endl;
  }
  else std::cout << a << std::endl;
}

void four() {
  int n, i;
  Rational el, suum(0), proiz(1);
  std::cin >> n;
  std::vector <Rational> mas;
  for (i = 0; i < n; i++) {
    std::cin >> el;
    mas.push_back(el);
    suum += el;
    proiz *= el;
  }
  std::cout << suum << ' ' << proiz << std::endl;
}

void five() {
  int num, n;
  Rational el;
  std::cin >> num >> n;
  std::vector <Rational> mas, m1, m2, m3, m4;
  for (int i = 0; i < n; ++i) {
    std::cin >> el;
    mas.push_back(el);
  }
  for (int i = 0; i < n; ++i) {
    m1.push_back(mas[i] + num);
    std::cout << m1[i] << ' ';
  }
  std::cout << '\n';
  for (int i = 0; i < n; ++i) {
    m2.push_back(mas[i] - num);
    std::cout << m2[i] << ' ';
  }
  std::cout << '\n';
  for (int i = 0; i < n; ++i) {
    m3.push_back(el * num);
    std::cout << m3[i] << ' ';
  }
  std::cout << '\n';
  for (int i = 0; i < n; ++i) {
    m4.push_back(mas[i] / num);
    std::cout << m4[i] << ' ';
  }
  std::cout << std::endl;
}

void six() {
  int n;
  Rational el, miin(20000), maax(-20000);
  std::cin >> n;
  std::vector <Rational> mas;
  for (int i = 0; i < n; ++i) {
    std::cin >> el;
    mas.push_back(el);
    miin = el < miin ? el : miin;
    maax = el > maax ? el : maax;
  }
  std::cout << miin << ' ' << maax << std::endl;
}

void seven() {
  std::string s;
  std::getline(std::cin, s);
  std::cout << (s.find('/') != std::string::npos ? "Yes" : "No") << std::endl;
}

void eight() {
  Rational a, b;
  std::cin >> a >> b;
  if (a != Rational(0)) std::cout << Rational(b / a);
  else std::cout << "No solution";
}

int main() {
  one();
  two();
  three();
  four();
  five();
  six();
  seven();
  eight();
  return 0;
}