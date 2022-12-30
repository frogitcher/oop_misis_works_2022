#include <iostream>
#include <iomanip>
#include <cmath>

double y(double a, double b, double x){
    return b*sqrt(1 - pow(x,2) / pow(a,2));
}

int main() {
    const double PI = 3.141592653589793;
    double a,b;
    int n, iter=1000000;
    std::cout<<std::fixed<<std::setprecision(6);
    std::cin>>b>>a>>n;
    double width = a/n;
    a/=2;
    b/=2;
    double subwidth = width/iter;

    for (int i=0; i<n; i++) {
        double left = a-width*i;
        double pos = left - subwidth/2.0;
        double volume = 0;
        for (int j=0; j<iter; j++) {
            volume += PI*pow(y(a, b, pos),2)*subwidth;
            pos-=subwidth;
        }
        std::cout<<volume<<std::endl;
    }
}
