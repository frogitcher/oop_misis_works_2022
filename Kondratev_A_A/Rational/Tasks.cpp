#include "Tasks.h"
#include "Rational.h"
#include <iostream>
#include <vector>

void task1() {
    Rational number1, number2;
    std::cin >> number1 >> number2;
    std::cout << number1 + number2 << std::endl;
    std::cout << number1 - number2 << std::endl;
    std::cout << number1 * number2 << std::endl;
    std::cout << number1 / number2 << std::endl;
}

void task2() {
    Rational number1, number2;
    std::cin >> number1 >> number2;
    std::cout << (number1 == number2 ? "Yes" : "No");
}

void task3() {
    Rational number1, number2;
    std::cin >> number1 >> number2;
    if (number1 > number2) {
        std::cout << "Maximum: " << number1 << std::endl << "Minimum: " << number2;
    } else {
        std::cout << "Maximum: " << number2 << std::endl << "Minimum: " << number1;
    }
}

void task4() {
    int n = 0;
    std::cout << "Enter the number of Rationals: ";
    std::cin >> n;
    std::vector<Rational> numbers(n);
    for (Rational& number: numbers) {
        std::cin >> number;
    }
    Rational sum, prod(1);
    for (const Rational& number: numbers) {
        sum += number;
        prod *= number;
    }
    std::cout << "Sum: " << sum << std::endl << "Product: " << prod;
}

void task5() {
    Rational number0;
    std::cin >> number0;
    int n = 0;
    std::cout << "Enter the number of Rationals: ";
    std::cin >> n;
    std::vector<Rational> numbers(n);
    for (Rational& number: numbers) {
        std::cin >> number;
    }
//    std::vector<Rational> copy;
//    std::copy(numbers.begin(), numbers.end(), copy.begin());
    std::cout << "Sum: ";
    for (const Rational& number: numbers) {
        std::cout << number + number0 << ' ';
    }
    std::cout << std::endl << "Subtract: ";
    for (const Rational& number: numbers) {
        std::cout << number - number0 << ' ';
    }
    std::cout << std::endl << "Prod: ";
    for (const Rational& number: numbers) {
        std::cout << number * number0 << ' ';
    }
    std::cout << std::endl << "Division: ";
    for (const Rational& number: numbers) {
        std::cout << number / number0 << ' ';
    }
    std::cout << std::endl;
}

void task6() {
    int n = 0;
    std::cout << "Enter the number of Rationals: ";
    std::cin >> n;
    std::vector<Rational> numbers(n);
    for (Rational& number: numbers) {
        std::cin >> number;
    }
    Rational max = numbers[0], min = numbers[0];
    for (const Rational& number: numbers) {
        if (max < number) {
            max = number;
        }
        if (min > number ) {
            min = number;
        }
    }
    std::cout << "Maximum: " << max << std::endl << "Minimum: " << min;
}

void task7() {
    std::cout << "Enter the number (if it is fractional number, use / between num and den) : ";
    std::string number;
    std::getline(std::cin, number);
    bool isSlash = false;
    bool isPoint = false;
    for (const char& c: number) {
        if (!std::isdigit(c)) {
            if (c == '/') {
                if (isSlash) {
                    std::cout << "No";
                    return;
                }
                isSlash = true;
            } else if (c == '.') {
                if (isPoint) {
                    std::cout << "No";
                    return;
                }
                isPoint = true;
            } else {
                std::cout << "No";
                return;
            }
        }
    }
    std::cout << "Yes";
}

void task8() {
    Rational number1, number2;
    std::cin >> number1 >> number2;
    std::cout << "X: " << number2 / number1;
}

void task1B() {
    Rational a1, b1, c1;
    Rational a2, b2, c2;
    std::cout << "Coefficients of the first equation" << std::endl;
    std::cin >> a1 >> b1 >> c1;
    std::cout << "Coefficients of the second equation" << std::endl;
    std::cin >> a2 >> b2 >> c2;
    if ((a1 / a2 == b1 / b2) && (a1 / a2 != c1 / c2)) {
        std::cout << "No answer";
    }
    else if ((a1 / a2 == b1 / b2) && (a1 / a2 == c1 / c2)) {
        std::cout << "Infinite answers";
    }
    else {
        Rational x = (b1 * c2 - b2 * c1) / (b1 * a2 - a1 * b2);
        Rational y = (c1 - a1 * x) / b1;
        std::cout << "One answer: " << x << ", " << y << std::endl;
    }
}

void task2B() {
    int n = 0;
    std::cout << "Enter the number of Rationals: ";
    std::cin >> n;
    std::vector<Rational> numbers(n);
    for (Rational& number: numbers) {
        std::cin >> number;
    }
    Rational temp_sum;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            temp_sum = numbers[i] + numbers[j];
            if (temp_sum.GetNum() == temp_sum.GetDen()) {
                std::cout << "Yes";
                return;
            }
        }
    }
    std::cout << "No answer";
}

void task3B() {
    int n = 0;
    std::cout << "Enter the number of Rationals: ";
    std::cin >> n;
    std::vector<Rational> numbers(n);
    for (Rational& number: numbers) {
        std::cin >> number;
    }
    bool isAnswer = false;
    for (int i = 0; i < numbers.size(); ++i) {
        std::vector<Rational> curNumbers;
        sum(numbers, i, Rational(0), curNumbers, isAnswer);
    }
    if (!isAnswer) {
        std::cout << "No answer";
    }

}

Rational sum(const std::vector<Rational>& numbers, int index, Rational curSum, std::vector<Rational>& curNumbers, bool& isAnswer) {
    if (index < numbers.size()) {
        curSum += numbers[index];
        curNumbers.push_back(numbers[index]);
        for (int i = index + 1; i < numbers.size(); ++i) {
            sum(numbers, i, curSum, curNumbers, isAnswer);
        }
    }
    if (!isAnswer && curSum.GetNum() == curSum.GetDen()) {
        for (auto number: curNumbers) { std::cout << number << ' '; }
        isAnswer = true;
    }
    if (index < numbers.size()) {
        curNumbers.pop_back();
    }
    return curSum;
}







