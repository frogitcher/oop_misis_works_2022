#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<string>
#include<map>
#include<set>

int main(int argc, char**argv) {
    int t;
    std::cin >> t;

    std::vector<int> ans(t);

    for(int i = 0; i < t; ++i){
        std::string str;
        std::cin >> str;

        int time = 0;
        std::pair<int,int>curPos = std::make_pair(0,0);
        std::pair<int,int>prevPos = std::make_pair(0,0);
        std::map<std::pair<int,int>,std::set<std::pair<int,int>>> track;

        for(auto& j : str){
            switch(j){
                case 'N':
                    curPos.second += 1;
                    if(track[curPos].size() == 0 or track[curPos].find(prevPos) == std::end(track[curPos])){
                        time+=5;
                        track[curPos].insert(prevPos);
                        track[prevPos].insert(curPos);
                        prevPos = curPos;
                    }
                    else{
                        time += 1;
                        prevPos = curPos;
                    }
                    break;
                case 'S':
                    curPos.second -= 1;
                    if(track[curPos].size() == 0 or track[curPos].find(prevPos) == std::end(track[curPos])){
                        time+=5;
                        track[curPos].insert(prevPos);
                        track[prevPos].insert(curPos);
                        prevPos = curPos;
                    }
                    else{
                        time += 1;
                        prevPos = curPos;
                    }
                    break;
                case 'W':
                    curPos.first -= 1;
                    if(track[curPos].size() == 0 or track[curPos].find(prevPos) == std::end(track[curPos])){
                        time+=5;
                        track[curPos].insert(prevPos);
                        track[prevPos].insert(curPos);
                        prevPos = curPos;
                    }
                    else{
                        time += 1;
                        prevPos = curPos;
                    }
                    break;
                case 'E':
                    curPos.first += 1;
                    if(track[curPos].size() == 0 or track[curPos].find(prevPos) == std::end(track[curPos])){
                        time+=5;
                        track[curPos].insert(prevPos);
                        track[prevPos].insert(curPos);
                        prevPos = curPos;
                    }
                    else{
                        time += 1;
                        prevPos = curPos;
                    }
                    break;
            }
        }

        ans[i] = time;
    }

    for(auto& i : ans)
        std::cout << i << std::endl;

    return 0;
}

