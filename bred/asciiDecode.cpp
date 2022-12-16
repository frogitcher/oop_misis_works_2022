#include <iostream>
#include <vector>
std::string getDecode(std::vector<int> ascii) {
    std::string message;
    std::vector<int>::iterator code = ascii.begin();
    while(code != ascii.end()) message += static_cast<char>(*code);
    return message;
}
int main() {
    std::cout << "Введите код сообщения, чтобы прервать ввод введите -1 :" << std::endl;
    std::vector<int> ascii;
    int a;
    while(a!=-1) {
        std::cin >> a;
        ascii.push_back(a);
    }
    std::cout << getDecode(ascii);
}