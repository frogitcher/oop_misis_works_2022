#include <iostream>
#include <vector>
#include <algorithm>

struct point {
    public:
        point(int i, int a) {
            this->index = i;
            this->value = a;
        }
        int operator<(point a) {
            if(this->value < a.value) return 1;
            else if(this->value > a.value) return -1;
            return 0;
        }
        int index;
        int value;
};

struct twoPoints {
    public:
        twoPoints(int a, int b) {
        this->firstPointIndex = a;
        this->secondPointIndex = b;
        }
        int firstPointIndex;
        int secondPointIndex;
};

twoPoints getIndexMinAbs(std::vector<point> &array) {
    
    twoPoints answer = twoPoints(-1, -1);
    if(array.size() < 2) return answer;

    int min = INT_MAX;

    std::sort(array.begin(), array.end());

    for(int i = 0; i < array.size() - 1; i++) {
        if(array[i].value < 1 && array[i + 1].value < 1) continue;
        int abs = array[i+1].value - array[i].value;
        if(abs < min) {
            min = abs;
            answer = twoPoints(array[i].index, array[i+1].index);
        }
    }
    return answer;
}

std::string test(std::vector<point> &array) {
    std::string ans;
    twoPoints indexes = getIndexMinAbs(array);
    ans = indexes.firstPointIndex + " " + indexes.secondPointIndex;
    return ans;
}

int main() {
    int size;
    std::cin >> size;
    std::vector<point> testArr;
    for(int i = 0; i < size; i++) {
        int a;
        std::cin >> a;
        testArr.push_back(point(i, a));
    }
    std::cout << test(testArr);
    
    // int countTests;
    // std::cin >> countTests;
    
    // for(int i = 0; i < countTests; i++) {
    //     int size;
    //     std::cout << "Введите количество элементов для теста №" << i+1 << std::endl;
    //     std::cin >> size;
    //     std::cout << "Ввод элементов для теста №" << i+1 << std::endl;
    //     std::vector<point> testArr = {};
    //     for(int i = 0; i < size; i++) {
    //         testArr[i].index = i;
    //         std::cin >> testArr[i].value;
    //     }
    //     std::string ans = test(testArr);
    //     std::cout << std::endl << "Ответ: " << ans;
    // }

}