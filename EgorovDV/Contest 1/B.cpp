#include <iostream>

int main(){
    int a[200001];
    int b[200001];
    for (int i = 0; i < 200001; i++)
        b[i] = 0;
    int n;
    int mn = 1000000001;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> a[i];
        b[a[i]] = i + 1;
    }

    int c = 0;

    for (int i = 0; i < 200001; i++){
        if (b[i] != 0 and b[i] < mn)
        {
            mn = b[i];
            c = i;
        }
    }
    
    std::cout << c;
}