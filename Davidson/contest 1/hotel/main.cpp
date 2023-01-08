#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    char a;
    std::cin>>n;
    std::vector<int> rooms(10);
    for (int i=0; i<n; i++) {
        std::cin>>a;
        switch (a) {
            case 'L':
                *std::find(rooms.begin(), rooms.end(), 0)=1;
                break;
            case 'R':
                *std::find(rooms.rbegin(), rooms.rend(), 0)=1;
                break;
            default:
                rooms[a - 48]=0;
                break;
        }
    }
    for (int i : rooms) {
        std::cout<<i;
    }
    std::cout<<std::endl;
}
