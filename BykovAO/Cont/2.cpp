#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool cmp(std::string a, std::string b) {
    return b < a;
}

std::vector<std::string> Question(std::vector<std::string> list) {

    for (int i = 0; i < list.size(); i++) {
        bool delete_flag = false;
        bool space_flag = false;
        for (char j : list[i]) {
            if (isalnum(j) || isalpha(j) || (j == ' ')){
                if (j == ' ') {
                    space_flag = true;
                }
            }
            else {
                delete_flag == true;
            }
        }
        if (delete_flag == true) {
            list.erase(list.begin() + i);
            i--;
        }
        else {
            if (space_flag == true) {
                list[i].insert(list.begin(), 2);
            }
            else {
                list[i].insert(list.begin(), 1);
            }
        }
    }
    
    std::sort(list.begin(), list.end(), cmp);

    return(list);
}