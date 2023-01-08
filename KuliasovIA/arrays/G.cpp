#include <iostream>
#include <string>
#include <map>

using namespace std;
int a[26];
int main()
{
	int n,j=26;
	cin >> n;
	string s;
	cin >> s;
	if (n < 26)
	{
		cout << "NO";
		return 0;
	}
	int t = 0;
	for (int i = 0; i < n; ++i)
	{
		if (int(s[i]) < 97)
		{
			t = int(s[i]) - 65;
		}
		else t = int(s[i]) - 97;
		if (a[t] == 0)
		{
			a[t] = 1;
			--j;
		}
		if (j == 0)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}


