#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.141592653589793;
    double a,b,c;
    ofstream fout("angle1.out");
    ifstream fin("angle1.in");
    fin>>a>>b;
    
    c=atan2(b,a);
    if (c<0) {
        c+=2*PI;
    }
    fout.precision(10);
    fout<<c;
    
    fin.close();
    fout.close();
}
