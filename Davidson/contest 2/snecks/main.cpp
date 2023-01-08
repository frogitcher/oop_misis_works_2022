#include <iostream>

int main(){
    bool buf[1000000];
    int n, pos;
    std::cin>>n;
    while (n){
        std::cin>>pos;
        buf[pos]=true;
        while (buf[n]) {
            std::cout<<n<<' ';
            n-=1;
        }
        std::cout<<std::endl;
    }
}
