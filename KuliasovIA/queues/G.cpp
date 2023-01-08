#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main()
{
	map <int, vector<int>> a;
	int t;
	cin >> t;
	for (int j = 0; j < t; ++j)
	{
		int s, f;
		int n, k;
		int p;
		cin >> n >> k;
		a.clear();
		for (int i = 0; i < n; ++i)
		{
			cin >> p;
			a[p].push_back(i);
		}
		for (int i = 0; i < k; ++i)
		{
			cin >> s >> f;
			if (!a[s].empty() && !a[f].empty())
			{
				if (*a[s].begin() < a[f].back()) cout << "yes" << endl;
				else cout << "no" << endl;
			}
			else cout << "no" << endl;
		}

	}
	return 0;
}

