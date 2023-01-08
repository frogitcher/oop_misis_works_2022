#include <iostream>
#include <random>
using namespace std;


bool ifin(double x, double y, double x1, double y1, double r){
    return ((pow ( x - x1, 2 ) + pow ( y - y1, 2 ) - pow(r,2)) > 0);
}

int main() {
    double it=10000, acs=0;
    mt19937 rnd(12);
    uniform_real_distribution<double> distrib(0,1);
    
    int  n;
    cin>>n;
    //описание массива
    double data[n][3];
    for(int i=0; i<n; i++)
      for(int j=0; j<3; j++)
        cin >> data[i][j];
    
    
    int flag=0;
for (int i=0; i<it; i++) {
    flag=0;
    double x = distrib(rnd);
    double y = distrib(rnd);
    
    for (int j=0; j<n; j++) {
        
        if (!(ifin(x,y,data[j][0],data[j][1],data[j][2]))) {
            flag=1;
            break;
        }
        
        }
    if (flag) acs+=1;

    }
    cout<<acs*100/it<<endl;
}
