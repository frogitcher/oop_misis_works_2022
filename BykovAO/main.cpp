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
        std::cout << a << " -�������, " << b << " -�������" << std::endl;
    else
        std::cout << b << " -�������, " << a << " -�������" << std::endl;
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
    std::cout << "�����: " << sm << ", ������������: " << pr << std::endl;
}

void Task5() {
    int n;
    int c;
    std::cin >> c >> n;
    std::vector<Rational> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    std::cout << "1 ������: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] + c << " ";
    }
    std::cout << std::endl;
    std::cout << "2 ������: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] - c << " ";
    }
    std::cout << std::endl;
    std::cout << "3 ������: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] * c << " ";
    }
    std::cout << std::endl;
    std::cout << "4 ������: ";
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
    std::cout << "��������: " << mx << ", �������: " << mn << std::endl;
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
        std::cout << "�����: (-�������������; +�������������)" << std::endl;
    }
    else {
        std::cout << "�����: " << b / a << std::endl;
    }
}

int main() {

}