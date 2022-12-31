#include <iostream>
 
using namespace std;
 
int main()
{
	long long n, k, l, p,k1=0;
	cin >> n >> k;
	cin >> l;
	--n;
	for (long long i = 0; i < n; ++i)
	{
		cin >> p;
		if (l > p) ++k1;
		else
		{
			l = p;
			k1 = 1;
		}
		if (k1 >= k)
		{
			cout << l;
			return 0;
		}
	}
	cout << l;
	return 0;
}