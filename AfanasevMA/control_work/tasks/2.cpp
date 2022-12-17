#include <string>
#include <iostream>


std::string Process(std::string str) {
    int count_upper = 0;
    int count_lower = 0;
    for (const char ch : str) {
        if (std::isalpha(ch)) {
            if (std::isupper(ch)) {
                ++count_upper;
            } else {
                ++count_lower;
            }
        }
    }
    // мы pass by value строку поэтому колдуем как хотим с ней щас тута инплейсно
    std::transform(str.begin(), str.end(), str.begin(), [count_upper, count_lower](char ch) {
        if (count_lower > count_upper) {
            return std::tolower(ch);
        } else {
            return std::toupper(ch);
        }
    });
    return str;
}

int main() {
    auto s1 = "heLLo WORLD 123JR*FWJDSFNDSF";
    std::cout << Process(s1) <<  " === " << s1 << std::endl;
    auto s2 = "helLo world 123JR*aboba83*(*";
    std::cout << Process(s2) << " === " << s2 << std::endl;
}