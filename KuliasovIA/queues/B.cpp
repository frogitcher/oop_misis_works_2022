#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(pair<int, int> a, pair <int, int> b)
{
	return a.first < b.first;
}
int main()
{
	string s;
	int p = 0;
	vector <pair<int,int>> a;
	int t, n;
	cin >> t;
	int i = 0;
	for (int j = 0; j < t; ++j)
	{
		cin >> n;
		int sum[3] = { 0,0,0 };
		i = 0;
		a.resize(n * 3, {0,0});
		for (int j = 0; j < n; ++j)
		{
			cin >> s;
			for (int y = 0; y < 3; ++y)
			{
				p = p * 1000 + int(s[y]);
			}
			a[i] = { p, 0 };
			++i;
			p = 0;
		}
		for (int j = 0; j < n; ++j)
		{
			cin >> s;
			for (int y = 0; y < 3; ++y)
			{
				p = p * 1000 + int(s[y]);
			}
			a[i] = { p, 1 };
			++i;
			p = 0;
		}
		for (int j = 0; j < n; ++j)
		{
			cin >> s;
			for (int y = 0; y < 3; ++y)
			{
				p = p * 1000 + int(s[y]);
			}
			a[i] = { p, 2 };
			++i;
			p = 0;
		}
		sort(a.begin(), a.end(), cmp);
		i = 0;
		while(i < a.size())
		{
			if (i + 1 == a.size())
			{
				sum[a[i].second] += 3;
				break;
			}
			else
			{
				if (a[i].first != a[i + 1].first)
				{
					sum[a[i].second] += 3;
					++i;
				}
				else
				{
					if (i + 2 < a.size() && a[i].first == a[i + 2].first)
					{
						i += 3;
					}
					else
					{
						sum[a[i].second] += 1;
						sum[a[i + 1].second] += 1;
						i += 2;
					}
				}
			}
		}
		for (int k = 0; k < 3; ++k) cout << sum[k] << ' ';
		cout << endl;
	}
}
