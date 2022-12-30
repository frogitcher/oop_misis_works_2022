#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double integral(double x, double a, double b){
    return (b*b*x - (b*b*x*x*x)/(3*a*a));
}

int main() {
    const double PI = 3.141592653589793;
    double a,b,j;
    int n;
    cin>>b>>a>>n;
    double wid=a/n;
    a/=2;
    b/=2;
    std::cout.precision(6);
    for (int i=0; i<n; i++) {
        j = a-i*wid;
        std::cout<<std::fixed<<round(((integral(j,a,b)-integral(j-wid,a,b))*PI)*1000000)/1000000<<std::endl;
    }
}
