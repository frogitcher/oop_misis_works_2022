#include <iostream>
#include <string>
#include <vector>
#include "Rational.h"

void Task1() {
    Rational a, b;
    std::cin >> a >> b;
    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
}

void Task2() {
    Rational a, b;
    std::cin >> a >> b;
    std::cout << ((a == b) ? "YES" : "NO");
}

void Task3() {
    Rational a, b;
    std::cin >> a >> b;
    if (a <= b) {
        std::cout << "Max= " << b << '\n' << "Min= " << a;
    }
    else {
        std::cout << "Max= " << a << '\n' << "Min= " << b;
    }
}

void Task4() {
    int n;
    std::cin >> n;
    std::vector <Rational> a(n);
    Rational sum(0), pr(1);
    for (int i = 0; i < n; i += 1) {
        std::cin >> a[i];
        sum += a[i];
        pr *= a[i];
    }
    std::cout << sum << " " << pr;
}

void Task5() {
    int n;
    std::cin >> n;
    std::vector <Rational> a(n), b(n), c(n), d(n);
    for (int i = 0; i < n; i += 1) {
        std::cin >> a[i];
        b[i] = a[i] - n;
        c[i] = a[i] * n;
        d[i] = a[i] / n;
        a[i] += n;
    }
    for (int i = 0; i < n; i += 1) std::cout << a[i] << " ";
    std::cout << std::endl;
    for (int i = 0; i < n; i += 1) std::cout << b[i] << " ";
    std::cout << std::endl;
    for (int i = 0; i < n; i += 1) std::cout << c[i] << " ";
    std::cout << std::endl;
    for (int i = 0; i < n; i += 1) std::cout << d[i] << " ";
    std::cout << std::endl;
}

void Task6() {
    int n;
    std::cin >> n;
    std::vector <Rational> a(n);
    for (int i = 0; i < n; i += 1) std::cin >> a[i];
    Rational max(-(10 ^ 9)), min(10 ^ 9);
    for (int i = 0; i < n; i += 1) {
        max = (a[i] > max) ? a[i] : max;
        min = (a[i] < min) ? a[i] : min;
    }
    std::cout << max << " " << min;
}

void Task7() {
    std::string s;
    std::getline(std::cin, s);
    bool isRational = false;
    for (int i = 0; i < s.size(); i += 1) {
        if (s[i] == '/') isRational = true;
    }
    std::cout << ((isRational) ? "Yes" : "No");
}

void Task8() {
    Rational a, b;
    std::cin >> a >> b;
    Rational x = b / a;
    std::cout << x;
}

void Task1H() {
    Rational a1, b1, c1, a2, b2, c2;
    std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if (a1 / a2 == b1 / b2 && a1 / a2 != c1 / c2) {
        std::cout << "No answers";
    }
    else if (a1 / a2 == b1 / b2 && a1 / a2 == c1 / c2) {
        std::cout << "Infinite answers";
    }
    else {
        Rational x = (b1 * c2 - b2 * c1) / (b1 * a2 - b2 * a1);
        Rational y = (c1 - a1 * x) / b1;
        std::cout << "One answer: " << x << ", " << y << std::endl;
    }
}

void Task2H() {
    int n;
    std::cin >> n;
    std::vector <Rational> a(n);
    for (int i = 0; i < n; i += 1) std::cin >> a[i];
    bool ans = false;
    Rational besti, bestj;
    for (int i = 0; i < n - 1; i += 1) {
        for (int j = i + 1; j < n; j += 1) {
            if ((a[i] + a[j]).GetDen() == 1) {
                besti = a[i], bestj = a[j];
                ans = true;
            }
        }
    }
    if (ans) {
        std::cout << besti << " " << bestj;
    }
    else {
        std::cout << "No answer";
    }
}

int main() {
    std::cout << "Choose the task";
}