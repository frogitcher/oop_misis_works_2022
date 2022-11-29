#include <iostream>
#include <vector>

int main()
{   
    int n;
    std::cin >> n;
    std::vector <int> id(n);
    std::vector <int> result(n);
    for (int i = 0; i < n; ++i) {
        id[i] = i + 1;
        int sum = 0;
        for (int j = 0; j < 4; ++j) {
            int subjres;
            std::cin >> subjres;
            sum += subjres;
        }
        result[i] = sum;
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (result[j] < result[i]) {
                std::swap(result[i], result[j]);
                std::swap(id[i], id[j]);
            }
            else if (result[j] == result[i] && id[j] > id[i]) {
                std::swap(id[i], id[j]);
            }
        }
    }
    for (int i = 1; i < n + 1; ++i) {
        if (id[n - i] == 1) std::cout << i; 
    }
}