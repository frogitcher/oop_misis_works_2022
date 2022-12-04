#include<iostream>
#include<map>
#include<utility>

int main(int argc, char** argv){
    int t;
    std::cin >> t;

    for(int _ = 0; _ < t; ++_){
        int n, k;

        std::cin >> n >> k;

        std::map<int,std::pair<int,int>>paths;

        for(int i = 1;i <= n; ++i){
            int temp;
            std::cin >> temp;
            if(paths[temp].first == 0)
                paths[temp].first = i;
            else
                paths[temp].second = i;
        }
        for(int i = 0; i < k; ++i){
            int l, r;
            std:: cin >> l >> r;
            if(paths[l] == std::make_pair(0,0))
                std::cout << "NO\n";
            else if(paths[r].first > paths[l].first or paths[r].second > paths[l].first)
                std::cout << "YES\n";
            else
                std::cout << "NO\n";
        }
    }
    return 0;
}