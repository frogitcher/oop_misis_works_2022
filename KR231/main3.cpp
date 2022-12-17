#include <iostream>
#include <map>

void print(std::map<int,int> mp){
    for (auto it=mp.begin(); it!=mp.end(); it++){
        std::cout<<it->first<<' '<<it->second<<std::endl;
    }
}

class maps{
public:
    std::map<int,int> first_map;
    std::map<int,int> second_map;
    void FirstSetTo(int x, int y){
        first_map[x]=y;
    }
    void SecondSetTo(int x, int y){
        second_map[x]=y;
    }
    bool FirstIsSet(int x){
        return first_map[x]!=NULL;
    }
    bool SecondIsSet(int x){
        return second_map[x]!=NULL;
    }
//    std::map<int,int> GetMapIntersection(){
//        std::map<int,int> ans;
//        if (<#condition#>) {
//            <#statements#>
//        }
//        return ans;
//    }
    
};


int main() {
    std::map<int,int> mp1{{1,2}};
    std::map<int,int> mp2{{1,2},{2,3}};
    bool a=1, b=0;
    std::cout<<(a^b)<<std::endl;
    
    
}
