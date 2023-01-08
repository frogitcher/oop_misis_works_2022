#include <iostream>
#include <vector>
#include <set>
std::pair<int, int> f(std::vector <int> &a)
{
	std::pair<int, int> p = { -1,-1 };
	std::pair<int, int> res = { -1,-1 };
	std::multiset<int> s;
	int n = a.size();
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > 0)
		{
			s.insert(a[i]);
		}
	}
	int q = s.size();
	if (q >= 2)
	{
		std::set<int>::iterator k = s.begin();
		int x, y;
		x = *k;
		++k;
		y = *k;
		int r = std::abs(x - y);
		p = { x,y };
		for (; k != s.end(); ++k)
		{
			x = *k;
			++k;
			if (k != s.end())
			{
				y = *k;
				if (std::abs(x - y) < r)
				{
					r = std::abs(x - y);
					p = { x,y };
				}
			}
			else --k;
		}
		int i = 0;
		while ((res.first == -1) || (res.second == -1))
		{
			if (a[i] == p.first && res.first==-1)
			{
				res.first = i;
				++i;
				continue;
			}
			if (a[i] == p.second) res.second = i;
			++i;
		}
	}
	if (res.first > res.second) std::swap(res.first, res.second);
	return res;
}
int main()
{
	//std::vector <int> v = {1, -2, -3, 5, 8};
	//std::pair <int, int> p = f(v);
	//std::cout << p.first << ' ' << p.second;
	return 0;
}