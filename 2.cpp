#include "2.h"
#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	minimal_r(a);
	return 0;
}