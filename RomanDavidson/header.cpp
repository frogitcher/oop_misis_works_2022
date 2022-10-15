#include "Header.h"
#include<string>


Rational minr(const Rational x, const Rational y) {
    if (x >= y) {
        return y;
    }
    else
    {
        return x;
    }
}
//Rational read() {
//    int a, c;
//    char b='0';
//    std::cin >> a;
//    if (b == '0') {
//        Rational r(a);
//        return r;
//    }
//    else
//    {
//        std::cin >> b;
//        std::cin >> c;
//        Rational r(a,c);
//        return r;
//    }
//    
//}
Rational read() {
    int a, c;
    char b;
    std::cin >> a >> b >> c;
    Rational r(a, c);
    return r;
}

std::istream& operator>>(std::istream& a, Rational& r) {
    int a1, c;
    char b;
    a >> a1 >> b >> c;
    r= Rational(a1, c);
    return a;
}