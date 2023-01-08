#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	long long o1;
	int n,v,p,t=0;
	cin >> n >> v >> p >> o1;
	long long s1 = v * o1,s=0;
	s1 /= p;
	vector <int> o(n-1);
	s += o1;
	for (int i = 0; i < n-1; ++i)
	{
		cin >> o[i];
		s += o[i];
	}
	if (s1 >= s)
	{
		cout << 0;
		return 0;
	}
	sort(o.begin(), o.end());
	for (int i = n-2; i >=0; --i)
	{
		++t;
		s -= o[i];
		if (s1 >= s)
		{
			cout << t;
			return 0;
		}

	}	
}

