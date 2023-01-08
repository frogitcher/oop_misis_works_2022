#include <iostream>
#include <map>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int q = 0; q < t; ++q)
	{
		int n, c,t;
		cin >> n >> c;
		map <int, int> m;
		for (int i = 0; i < n; ++i)
		{
			cin >> t;
			if (m.find(t) != m.end())
			{
				++m[t];
			}
			else
			{
				m.insert({ t,1 });
			}
		}
		map<int, int> ::iterator it = m.begin();
		int sum = 0;
		for (; it != m.end(); ++it)
		{
			if (it->second >= c) sum += c;
			else (sum += it->second);
		}
		cout << sum << endl;
	}
	return 0;
}

