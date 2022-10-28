#include "rational.h"

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
    if (a == b)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
}

void Task3() {
    Rational a, b;
    std::cin >> a >> b;
    if (a > b)
        std::cout << a << " -большее, " << b << " -меньшее" << std::endl;
    else
        std::cout << b << " -большее, " << a << " -меньшее" << std::endl;
}

void Task4() {
    int n;
    std::cin >> n;
    std::vector<Rational> arr(n);
    Rational sm(0, 1);
    Rational pr(1, 1);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
        sm += arr[i];
        pr *= arr[i];
    }
    std::cout << "сумма: " << sm << ", произведение: " << pr << std::endl;
}

void Task5() {
    int n;
    int c;
    std::cin >> c >> n;
    std::vector<Rational> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    std::cout << "1 массив: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] + c << " ";
    }
    std::cout << std::endl;
    std::cout << "2 массив: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] - c << " ";
    }
    std::cout << std::endl;
    std::cout << "3 массив: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] * c << " ";
    }
    std::cout << std::endl;
    std::cout << "4 массив: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] / c << " ";
    }
    std::cout << std::endl;
}

void Task6() {
    int n;
    std::cin >> n;
    std::vector<Rational> arr(n);
    Rational mn(100000, 1);
    Rational mx;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
        if (arr[i] > mx) {
            mx = arr[i];
        }
        else if (arr[i] < mn) {
            mn = arr[i];
        }
    }
    std::cout << "максимум: " << mx << ", минимум: " << mn << std::endl;
}

void Task7() {
    int a, b;
    char c;
    std::cin >> a >> c >> b;
    if ((c != '/') || (b == 0)) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }
}

void Task8() {
    Rational a, b;
    std::cin >> a >> b;
    if (a == 0) {
        std::cout << "ќтвет: (-бесконечность; +бесконечность)" << std::endl;
    }
    else {
        std::cout << "ќтвет: " << b / a << std::endl;
    }
}

int main() {

}