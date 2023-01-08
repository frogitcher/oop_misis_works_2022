#include <iostream>
#include <vector>
using namespace std;
vector<int> a(100001, 0);
int main()
{
	int n;
	cin >> n;
	a.resize(n + 1, 0);
	int t;
	int j = n;
	for (int i = 0; i < n; ++i)
	{
		cin >> t;
		a[t] = 1;
		while (a[j] == 1)
		{
			cout << j << ' ';
			--j;
		}
		cout << endl;
	}
	return 0;	
}

