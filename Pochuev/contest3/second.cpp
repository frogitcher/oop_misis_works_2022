#include<iostream>
#include<vector>
#include<cmath>

int main(){
    int n;
    double s = 0,sa = 0;
    std::vector<std::vector<double>> attacks;

    std::cin >> n;

    for(int _ = 0; _ < n; ++_){
        double x, y, r;
        std:: cin >> x >> y >> r;
        attacks.push_back(std::vector<double>{x,y,r});
    }
    for(double x = 0; x <= 1;x+=0.001){
        for(double y = 0; y <= 1; y+=0.001){
             for(auto& attack : attacks){
                if((pow(x - attack[0],2) + std::pow(y-attack[1],2))<= std::pow(attack[2],2)){
                    sa+=1;
                    break;
                }
            }
                 s+=1;
        }
    }
    std::cout<< sa / s;
    return 0;
}
