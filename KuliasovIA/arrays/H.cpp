#include <iostream>
#include <string>
#include <vector>

using namespace std;
int a[10];
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == 'L')
		{
			for (int j = 0; j < 10; ++j)
			{
				if (!a[j])
				{
					a[j] = 1;
					break;
				}
			}
		}
		if (s[i] == 'R')
		{
			for (int j = 9; j>=0; --j)
			{
				if (!a[j])
				{
					a[j] = 1;
					break;
				}
			}
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			a[s[i] - '0'] = 0;
		}
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << a[i];
	}
	return 0;

}

