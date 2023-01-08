#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
bool m(pair<int, int> a, pair<int, int>b)
{
	return (a.second < b.second);
}
int32_t main()
{
	int n, t;
	cin >> n;
	vector < pair<int, int> > v;
	pair<int, int> p;
	map <int, int> a;
	for (long i = 0; i < n; ++i)
	{
		cin >> t;
		a[t] = i;
	}
	map <int, int> :: iterator i=a.begin();
	for (i; i!=a.end(); ++i)
	{
		p.first = i->first;
		p.second = i->second;
		v.push_back(p);
	}
	sort(v.begin(), v.end(), m);
	cout << v[0].first;
	return 0;
}

