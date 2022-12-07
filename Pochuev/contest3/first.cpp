#include<fstream>
#include<cmath>

constexpr double get_pi(){
    return std::atan(1)*4;
}

int main(int argc, char** argv){
    std::ifstream in("angle1.in",std::ios::binary | std::ios :: in);
    constexpr double pi = get_pi();
    double x,y,ans;
    in >> x >> y;

    ans = std::atan2(y,x);

    std::ofstream out("angle1.out");
    out.precision(10);

    if(ans < 0)
        out << (2*pi + ans);
    else
        out << ans;

    in.close();
    out.close();
    return 0;
}