#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{
	double x = -9.667;
	//std::cin >> x; 
	// тестите как вам угодно
	double const rsin = sin(x);
	std::cout << std::fixed << std::setprecision(10);
	std::cout << rsin << std::endl;
	int num = 10;
	int j = 0;
	if (x > acos(-1))
	{
		while (x > acos(-1))
		{
			x -= acos(-1);
			++j;
		}
	}
	if (x < -acos(-1))
	{
		while (x < -acos(-1))
		{
			x += acos(-1);
			++j;
		}
	}
	double msin = x;
	long long part = 1;
	for (int i = 1; i < num; ++i)
	{
		part = part*(2*i) * (2 * i + 1);
		msin += pow(-1, i) * (pow(x, 2 * i + 1) / part);
	}
	msin = pow(-1, j) * msin;
	std::cout << msin  << std::endl << std::abs(msin - rsin);
}
