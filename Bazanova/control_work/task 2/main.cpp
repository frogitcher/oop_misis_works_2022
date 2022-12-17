#include <iostream>
#include <vector>


std::vector<int> minimum(std::vector<int> a) {
    int mini = 100000000;
    bool flag = false;
    std::vector<int> ans;
    int len = a.size();
    for (int i = 0; i < len; ++i) {
        if (a[i] > 0) {
            for (int j = 0; j < len; ++j) {
                if (i != j && a[j] > 0 && std::abs(a[i] - a[j]) < mini) {
                    mini = std::abs(a[i] - a[j]);
                    ans = {i, j};
                    flag = true;
                }
            }
        }
    }
    if (not flag) {
        ans = {-1, -1};
    }
    return ans;
}

int main() {
    std::vector<int> a = {1, 3, 5, 8, 2, 10};
    if (minimum(a)[0] == 0 && minimum(a)[1] == 4) {
        std::cout << "1 true" << std::endl;
    }
    else {
        std::cout << "1 false" << std::endl;
    }

    a = {-1, -3, -5, -8, -2, -10};
    if (minimum(a)[0] == -1 && minimum(a)[1] == -1) {
        std::cout << "2 true" << std::endl;
    }
    else {
        std::cout << "2 false" << std::endl;
    }

    a = {1, 3, 5, 8, 1, 10};
    if (minimum(a)[0] == 0 && minimum(a)[1] == 4) {
        std::cout << "3 true" << std::endl;
    }
    else {
        std::cout << "3 false" << std::endl;
    }

    return 0;
}