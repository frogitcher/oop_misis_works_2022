#include<iostream>
#include<string>
#include<map>
#include<vector>

int main() {
    int t;
    std::vector<std::vector<int>>ans;

    std::cin >> t;

    for (int _ = 0; _ < t; ++_) {
        std::vector temp_ans = { 0,0,0 };
        int n;
        std::map<std::string, std::array<int, 4>>seq;

        std::cin >> n;

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < n; ++j) {
                std::string temp;
                std::cin >> temp;
                seq[temp][0] += 1;
                seq[temp][i + 1] = 2;
            }
        }
        for (auto& [key, value] : seq) {
            if (value[0] == 1) {
                for (uint32_t j = 1; j <= 4; ++j) {
                    if (value[j] != 0) {
                        temp_ans[j - 1] += 3;
                        break;
                    }
                }
            }
            else if (value[0] == 2) {
                for (uint32_t j = 1; j <= 4; ++j) {
                    if (value[j] != 0) {
                        temp_ans[j - 1] += 1;
                    }
                }
            }
        }
        ans.push_back(temp_ans);
    }
    for (auto& arr : ans) {
        for (auto& j : arr) {
            std::cout << j << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}
