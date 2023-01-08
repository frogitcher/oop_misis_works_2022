#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    std::cout<<std::fixed<<std::setprecision(6);
    double s=0;
    int iter=10000;
    double width = 1.0/iter;
    double pos;
    pos = 1-width/2;
    for (int i=0; i<iter; i++) {
        s+=sin(pos)*width;
        pos-=width;
    }
    std::cout<<s<<std::endl;
}
