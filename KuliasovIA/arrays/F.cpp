#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int l;
	cin >> l;
	string s;
	cin >> s;
	if (l % 4 != 0)
	{
		cout << "===";
		return 0;
	}
	map<char, int> a;
	a['A'] = 0;
	a['C'] = 0;
	a['G'] = 0;
	a['T'] = 0;
	int t = l / 4;
	for (int i = 0; i < l; ++i)
	{
		if (a.find(s[i]) != a.end())
		{
			++a.find(s[i])->second;
			if (a.find(s[i])->second > t)
			{
				cout << "===";
				return 0;
			}
		}
	}
	int sc = 0;
	map <char, int> :: iterator it = a.begin();
	for (;it != a.end();++it)
	{
		if (it->second == t)
		{
			++it->second;
			++sc;
		}
	}
	if (sc == 4)
	{
		cout << s;
		return 0;
	}
	it = a.begin();
	for (int i = 0; i < l; ++i)
	{
		if (it->second >= t)
		{
			if (it->second == t) ++sc;
			if (sc == 4) break;
			++it;
			--i;
			continue;
		}
		if (s[i] == '?')
		{
			s[i] = it->first;
			++it->second;
		}
	}
	if (s.find('?') < l)
	{
		cout << "===";
		return 0;
	}
	cout << s;
	return 0;
}

