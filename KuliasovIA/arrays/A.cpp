#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	long n,t,mi=1000000000,ma=0,mit=0,mat=0;
	cin >> n;
	
	for (long i = 0; i < n; ++i)
	{
		cin >> t;
		if (t < mi)
		{
			mi = t;
			mit = 1;
		}
		else if (mi == t)
		{
			++mit;
		}
		if (t > ma)
		{
			ma = t;
			mat = 1;
		}
		else if (ma == t)
		{
			++mat;
		}
	}
	cout << max(n - mit - mat,0l+0);
}

