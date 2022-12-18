#include<iostream>
#include<vector>

int main(){
    long long n, k;
    std:: cin >> n >> k;
    
    std::vector<int> vec(n);
    
    for(long int i = 0; i < n; ++i){
        std::cin >> vec[i];   
    }
    
    long long indWinner = 0,count = 0,indOppon = 1;
    
    while(count < k){
        if(indOppon > n*3){
            break;    
        }
        if(vec[indWinner % n] > vec[indOppon % n]){
            int temp = vec[indWinner%n];
            vec[indWinner % n] = vec[indOppon % n];
            vec[indOppon % n] = temp;
            indWinner++;
            count++;
            indOppon++;
        }
        else{
            count = 1;
            indWinner = indOppon;
            indOppon ++;
        }
    }
    std::cout << vec[indWinner%n];
    
    return 0;
}
