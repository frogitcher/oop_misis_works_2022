#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		if (s[0] == 'Y' || s[0] == 'y')
		{
			if (s[1] == 'e' || s[1] == 'E')
			{
				if (s[2] == 's' || s[2] == 'S')
				{
					cout << s << '\n';
					continue;
				}

			}
		}
		cout << "NO" << '\n';
	}
}

