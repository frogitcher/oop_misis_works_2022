#include <iomanip>
#include <fstream>

using namespace std;

const double eps = 1e-8;
const double pi = acos(-1);


double MaclorenAtan(double const x) {
    double result = 0;
    double diff = x * x;
    int divider = 1;
    double step = x;
    while (fabs(step) > eps) {
        result += step;
        step *= diff * divider / (divider + 2) * (-1);
        divider += 2;
    }
    return result;
}

int main() {
    ifstream fin("angle1.in");
    ofstream fout("angle1.out");
    fout << fixed << setprecision(10);
    double x = 0, y = 0, res = 0;
    fin >> x >> y;
    double tan = y / x;
    if (fabs(x) < eps) {
        if (y < 0) {
            res = 3 * pi / 2;
        } else {
            res = pi / 2;
        }
    } else if (fabs(y) < eps) {
        if (x < 0) {
            res = pi;
        } else {
            res = 0;
        }
    } else {
        if (fabs(tan) > 1) {
            res = pi / 2 - MaclorenAtan(1 / tan);
        } else {
            res = MaclorenAtan(tan);
        }
        if (x < 0) {
            res += pi;
        }
        else if (y < 0) {
            res += 2 * pi;
        }
    }
    fout << res;
}