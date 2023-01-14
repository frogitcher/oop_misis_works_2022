#include <iostream>
#include <map>

void present() {
    long long n;
    std::cin >> n;
    long long answer = 0;
    std::map<long long, long long> repeates;

    for (long long i = 0; i < n; ++i) {
        long long number;
        std::cin >> number;
        if (repeates.find(number) != repeates.end() && (answer < repeates[number] + 1)) {
            answer = repeates[number] + 1;
        }
        repeates[number] = i;
    }
    std::cout << answer << std::endl;
}

int main() {

    int t;
    std::cin >> t;
    for (int j = 0; j < t; ++j) {
        present();
    }
}