#include <iostream>

int main(){
    int a[100001];
    int n;
    int mn = 1000000001;
    int mx = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> a[i];
        if (a[i] > mx) mx = a[i];
        if (a[i] < mn) mn = a[i];
    }
    
    int cmn = 0;
    int cmx = 0;
    
    for (int i = 0; i < n; i++){
        if (a[i] == mx) cmx+=1;
        if (a[i] == mn) cmn+=1;
    }
    
    if (mx == mn) std::cout << 0;
    else std::cout << n - cmn - cmx;
}
/* Wed Nov 02 2022 22:47:50 GMT+0300 (Moscow Standard Time) */
