#include <iostream>
#include <vector>

using namespace std;
vector <int> a(200001);
int main()
{
	int t;
	cin >> t;
	for (int j = 0; j < t; ++j)
	{
		int n;
		cin >> n;
		a.resize(n+1, 0);
		vector <int> b(n+1, 0);
		bool q=1;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		for (int i = n - 1; i >= 0; --i)
		{
			if ((b[a[i]]) == 0) ++b[a[i]];
			else
			{
				cout << i + 1 << endl;
				q = 0;
				break;
			}
		}
		if (q) cout << 0 << endl;
	}
	return 0;
}
