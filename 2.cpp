#include "2.h"
#include <iostream>
#include <vector>

int minimal_r(std::vector<int> a)
{
	int n = std::size(a);
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	int minimum = 1000000;
	std::pair<int, int> p;
	p.first = -1;
	p.second = -1;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] > 0)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[j] > 0)
				{
					if (std::abs(a[i] - a[j]) < minimum)
					{
						minimum = std::abs(a[i] - a[j]);
						p.first = i;
						p.second = j;
					}
				}
			}
		}
	}
	std::cout << p.first << " " << p.second << std::endl;
	return 0;
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	minimal_r(a);
	return 0;
}