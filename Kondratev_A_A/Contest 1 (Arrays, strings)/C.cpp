#include <iostream>
#include <array>
#include <vector>


int get_sum(const std::array<int, 4> &x) {
    int sum = 0;
    for (const int &elem: x) {
        sum += elem;
    }
    return sum;
}

int main() {
    int number = 0;
    std::cin >> number;
    std::vector<std::array<int, 4>> students(number);
    std::vector<int> curr_marks(4);
    for (auto &student: students) {
        for (auto &mark: student) {
            std::cin >> mark;
        }
    }
    int index = 1;
    int sum_tomas = get_sum(students[0]);
    for (const auto student: students) {
        if (get_sum(student) > sum_tomas) {
            ++index;
        }
    }
    std::cout << index;
}