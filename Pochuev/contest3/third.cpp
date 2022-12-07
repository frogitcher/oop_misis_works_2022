#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>

const double Pi = 3.14159265358979;
double Cup_volume(double a, double b,double c){
    return Pi * a * a* c*c * (3*b - c) / (3 * b* b);
}

int main(){
    int n;
    double a,b;
    std::cin >> a >> b >> n;
    
    double delta = a / n;

    if(n == 1)
        std::cout << std::fixed<<std::setprecision(6)<< 4 * Pi * a* a* b /24;
    else if(n % 2 == 0){
        double prev = Cup_volume(a/2,b/2,b/2);
        std::vector<double> ans;

        for(int i = n/2 - 1; i >= 0; --i) {
            double cur = Cup_volume(a / 2, b / 2, b * i / n);
            ans.push_back(std::abs(prev - cur));
            prev = cur;
        }
        for(auto i = ans.rbegin(); i != ans.rend(); ++i)
            std::cout << std::fixed<<std::setprecision(6)<< *i<< '\n';
        for(auto i:ans)
            std::cout << std::fixed<<std::setprecision(6)<<i << '\n';
    }
    else{
        std::vector<double>ans;
        double middle_elem = Cup_volume(a/2,b/2,b/2) - Cup_volume(a/2,b/2,b/2 - b/n/2);
    
        ans.push_back(middle_elem * 2);

        double prev = Cup_volume(a/2,b/2, b/2 - b/n/2);

        for(int i = (n-2)/2; i >= 0; --i){
            double cur = Cup_volume(a/2,b/2,b* i/n);
            ans.push_back(std::abs(prev - cur));
            prev = cur;
        }
       for(auto i = ans.rbegin(); i != ans.rend(); ++i)
            std::cout << std::fixed<<std::setprecision(6)<< *i<< '\n';
       for(auto i = ans.begin()+1;i<ans.end();++i)
            std::cout << std::fixed<<std::setprecision(6)<< *i << '\n';
    }

    return 0;
}