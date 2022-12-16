#include <iostream>
#include <regex>

bool checkException(std::string s, std::string pattern) {
    std::regex r(pattern);
    return std::regex_match(s, r);
}

int main() {
    using namespace std;
    cout << "Введите способ задания данных. 1 - с клавиатуры, 2 - рандом" << endl;
    int way; 
    while(cin.fail() || (way != 1 && way != 2)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Введите число 1 или 2\n";
        cin >> way;
    }
    if(way == 1) cout << "1";
    else cout << "2";
}
