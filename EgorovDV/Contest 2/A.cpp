#include <iostream>

int main(){
    int n;
    std::cin >> n;
    unsigned long long k;
    std::cin >> k;

    if (k >= n){
        std::cout << n;
        return 0;
    }
    
    int a1;
    int a;
    std::cin >> a1;
    int max = a1;
    int kTemp = 0;

    for (int i = 1; i < n; i++){
        std::cin >> a;
        if (max > a) 
            kTemp += 1;

        else{
            max = a;
            kTemp = 1;
        }

        if (kTemp == k)
            break;
    }

    std::cout << max;
}