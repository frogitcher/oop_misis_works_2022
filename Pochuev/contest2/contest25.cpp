#include<iostream>
#include<map>

int main(int argc, char**argv){
    int t;
    std::cin >> t;

    for(int _ = 0; _ < t; ++_){
        int n, c, ans = 0;
        std::cin >> n >> c;

        std::map<int,int> orbits;

        for(int i = 0; i < n; ++i){
            int temp;
            std::cin >>temp;
            orbits[temp] += 1;
        }
        for(auto& [key, value] : orbits){
            if(value > c)
                ans += c;
            else
                ans += value;
        }
        std::cout << ans << '\n';
    }
    return 0;
}