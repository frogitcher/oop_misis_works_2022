#include <iostream>

int read(){
    int a,sum=0;
    for (int i=0; i<4; i++) {
        std::cin>>a;
        sum+=a;
    }
    return sum;
}

int main() {
    int n, tom, other, top=1;
    std::cin>>n;
    tom=read();
    for (int i=0; i<n-1 ; i++) {
        other=read();
        if (other>tom) {
            top++;
        }
    }
    std::cout<<top<<std::endl;
}
