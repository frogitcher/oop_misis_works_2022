#include <iostream>
#include <math.h>

double factorial(int k) {
    double answer = 1.0;
    for(int i = 1; i <= k; i++) answer *= i;
    return answer;
}

double getSin(double x) {
    double tailorSum = 0;
    for(int k = 0; k < 10; k++) {
        tailorSum += pow(-1.0, k)
                    * pow(x, 2 * k + 1) 
                    / factorial(2 * k + 1);
    }
    return tailorSum;
}

int main() {
    std::cout << getSin(M_PI/6) << std::endl;
    std::cout << getSin(M_PI/3) << std::endl;
    std::cout << getSin(-0.4) << std::endl;
}
