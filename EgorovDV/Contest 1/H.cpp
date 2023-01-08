#include <iostream>
#include <string>
int main(){
    int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} ;
    char s;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> s;
        if (s == 'R'){
            for (int j = 9; j > -1; j--){
                if (a[j] == 0){
                        a[j] = 1;
                        break;
                    }
            }
        }
        
        if (s == 'L'){
                for (int j = 0; j < 10; j++){
                    if (a[j] == 0){
                            a[j] = 1;
                            break;
                        }
                }
            }
            
        if (s != 'L' and s != 'R'){
                a[char(s)-48] = 0;
            }
    }
    
    for (int i = 0; i < 10; i++){
        std::cout<<a[i];
    }
}
/* Mon Nov 07 2022 23:39:04 GMT+0300 (Moscow Standard Time) */