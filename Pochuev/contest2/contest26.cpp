#include<iostream>
#include<map>
#include<vector>

int findIndex(std::vector<uint32_t>&arr,uint32_t val,uint32_t ind){
    int count = 0;
    for(int i = 0; i < arr.size(); ++i){
        if(arr[i] == val and count == ind-1)
            return i;
        else if(arr[i] == val)
            count++;
    }
    return -1;
}

int main(int argc, char**argv){
    uint32_t t;
    std::cin >> t;

    for(unsigned _ = 0; _ < t; ++_){
        std::map<uint32_t, uint32_t>seq;
        int n,count = 0;

        std::cin >> n;

        std::vector<uint32_t> temp_seq(n);

        for(uint32_t i = 0; i < n; ++i){
            uint32_t temp;
            std::cin >> temp;

            temp_seq[i] = temp;
            seq[temp] += 1;
        }

        for(auto& [key,value]:seq)
            if(value > 1)
                count = std::max(count, findIndex(temp_seq,key,value-1)+1);

        std::cout << count << '\n';
    }
    return 0;
}