#include <utility>
#include <iostream>
#include <string>
#include <set>

int main() {
    int t;
    std::cin >> t;

    while (t) {
    std::string way;
    std::cin >> way;
    std::set<std::pair<int, int>> coordinates;
    
    int x = 0;
    int y = 0;
    int xNow = 0;
    int yNow = 0;
    int time = 0;
    for (char dir : way) {
        xNow = x;
        yNow = y;
        (dir == 'E') ? x++ : x;
        (dir == 'W') ? x-- : x;
        (dir == 'N') ? y++ : y;
        (dir == 'S') ? y-- : y;
        if (coordinates.count({xNow + x, yNow + y}) == 0) {
            time += 5;
            coordinates.insert({xNow + x, yNow + y});
        }
        else
            time += 1;
    }
    std::cout << time << std::endl;

    t--;
    }
}