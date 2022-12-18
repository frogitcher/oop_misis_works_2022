#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>

//const double Pi = std::atan(1) * 4;
const double Pi = 3.14159265358979;

double Radius(double x, double a, double b) {
    return std::max(0.0,std::sqrt(b*b - b*b * x * x / (a*a)));
}

int main() {
    std::cout << std::fixed << std::setprecision(10);
    int n;
    double width, height;
    std::cin >> width >> height >> n;
    double count = n / 2 + n % 2;
    double length = height / n;
    int iterations = 1400000;
    double delta = length / iterations;
    std::vector<double> ans;

    if (n % 2 == 0) {
        for (int i = 0; i < count; ++i) {
            double volume = 0;
            double left_limit = length * i;
            for (int j = 0; j < iterations; j++) {
                double left_x = left_limit + delta * j;
                double right_x = left_limit + delta * (j + 1);
                double left_r = Radius(left_x, height / 2, width / 2);
                double right_r = Radius(right_x, height / 2, width / 2);
                volume += Pi * delta * (left_r * left_r + left_r * right_r + right_r * right_r) / 3;
            }
            ans.push_back(volume);
        }
        for (auto it = ans.rbegin(); it < ans.rend(); ++it) {
            std::cout << *it << '\n';
        }
        for (auto it = ans.begin(); it < ans.end(); ++it) {
            std::cout << *it << '\n';
        }

    }
    else {
        double aver_elem = length / 2;
        double volume = 0;
        delta /= 2;
        for (int i = 0; i < iterations; i++) {
            double left_x = delta * i;
            double right_x = delta * (i + 1);
            double left_r = Radius(left_x, height / 2, width / 2);
            double right_r = Radius(right_x, height / 2, width / 2);
            volume += Pi * delta * (left_r * left_r + left_r * right_r + right_r * right_r) / 3;
        }
        ans.push_back(volume * 2);
        delta *= 2;
        for (int i = 0; i < count - 1; ++i) {
            double volume = 0;
            double left_limit = aver_elem + length * i;
            for (int j = 0; j < iterations; j++) {
                double left_x = left_limit + delta * j;
                double right_x = left_limit + delta * (j + 1);
                double left_r = Radius(left_x, height / 2, width / 2);
                double right_r = Radius(right_x, height / 2, width / 2);
                volume += Pi * delta * (left_r * left_r + left_r * right_r + right_r * right_r) / 3;
            }
            ans.push_back(volume);
        }
        for (auto it = ans.rbegin(); it < ans.rend(); ++it) {
            std::cout << *it << '\n';
        }
        for (auto it = ans.begin() + 1; it < ans.end(); ++it) {
            std::cout << *it << '\n';
        }

    }
    return 0;
}
