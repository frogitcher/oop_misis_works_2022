#include <iostream>
#include"Header.h"
#include<vector>


int main() {
    //Rational r1(1, 2), r2(2, 1);
    //std::cout << maxr(r2, r1).AsString() << std::endl;
    //int n;                            //¬водитс€ массив, нужно найти минимум/максимум из чисел в нем.
    //Rational ma,mi;
    //std::cout << "¬ведите количество n членов массива:\n";
    //std::cin >> n;
    //std::vector<Rational> r(n);
    //for (auto i = 0; i < n; i++) {
    //    r[i] = read();
    //}
    //for (int i = 0; i < n-1; i++)
    //{
    //    for (int j = i+1; j < n; j++)
    //    {
    //        if ((r[i] + r[j]).GetDen() == 1) {
    //            std::cout << r[i].AsString() << ' ' << r[j].AsString()<<std::endl;
    //            break;
    //        }
    //    }
    //    //std::cout << "No answer.\n";
    //}
    Rational a1, b1, c1, a2, b2, c2, x, y, d, dx, dy;
    std::cin >> a1 >> b1 >> c1;
    std::cin >> a2 >> b2 >> c2;
    if (a1 == a2 && b1 == b2 && c1 != c2) {
        std::cout << "No Answer";
    }
    else if (a1 / a2 == b1 / b2 && b1 / b2 == c1 / c2) {
        std::cout << "Infinite answers";
    }
    else
    {
        d = a1 * b2 - b1 * a2;
        dx = c1 * b2 - c2 * b1;
        dy = a1 * b2 - a2 * b1;
        x = dx / d;
        y = dy / d;
        std::cout << "One answer: X = " << x.AsString() << " Y = " << y.AsString();
    }
}