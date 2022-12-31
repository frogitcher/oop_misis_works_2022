#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
bool m(pair <int, int> a, pair <int, int> b)
{
	if (a.second > b.second) return 1;
	if (a.second == b.second) return a.first < b.first;
	if (a.second < b.second) return 0;

}
int main()
{
	pair<int, int> p;
	vector <pair <int, int> > a;
	int n,t,s;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		p.first = i + 1;
		s = 0;
		for (int i = 0; i < 4; ++i)
		{
			cin >> t;
			s += t;
		}
		p.second = s;
		a.push_back(p);
	}
	sort(a.begin(), a.end(), m);
	for (int i = 0; i < n; ++i)
	{
		if (a[i].first == 1)
		{
			cout << i + 1;
			break;
		}
	}
	return 0;

	
}

