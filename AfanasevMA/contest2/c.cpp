#include <queue>
#include <iostream>
#include <array>
#include <map>
#include <stdexcept>
#include <set>


void process_batch() {
    std::string path;
    std::cin >> path;
    std::set<std::array<int, 4>> visited_nodes{{0, 0}};
    int coord_x = 0;
    int coord_y = 0;
    int cost = 0;

    for (const char &itm: path) {
        int prev_coord_x = coord_x;
        int prev_coord_y = coord_y;
        switch (itm) {
            case 'N':
                coord_y++;
                break;
            case 'W':
                coord_x--;
                break;
            case 'S':
                coord_y--;
                break;
            case 'E':
                coord_x++;
                break;
        }
        std::array<int, 4> transition = {prev_coord_x, prev_coord_y, coord_x, coord_y};
        std::array<int, 4> rev_transition = {coord_x, coord_y, prev_coord_x, prev_coord_y};
        bool was_here = visited_nodes.find(transition) != visited_nodes.end();
        if (was_here) {
            cost += 1;
        } else {
            cost += 5;
        }
        visited_nodes.emplace(transition);
        visited_nodes.emplace(rev_transition);
    }
    std::cout << cost << std::endl;
}

int main() {
    int batches;
    std::cin >> batches;
    for (int i = 0; i < batches; i++) {
        process_batch();
    }
}