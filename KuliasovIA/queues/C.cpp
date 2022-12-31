#include <iostream>
#include <set>
using namespace std;
struct line
{
	int x1, y1, x2, y2;
};
bool operator < (line a, line b)
{
	return a.x1 * 10200 + a.y1 * 1100 + a.x2 * 106 + a.y2 * 15 < b.x1 * 10200 + b.y1 * 1100 + b.x2 * 106 + b.y2 * 15;
}
int main()
{
	int k;
	cin >> k;
	for (int q = 0; q < k; ++q)
	{
		string a;
		cin >> a;
		set<line> set1;
		int x1=0, x2=0, y1=0, y2=0;
		for (int i = 0; i < a.size(); ++i)
		{
			if (a[i] == 'N')
			{
				x2 = x1 + 1;
			}
			if (a[i] == 'S')
			{
				x2 = x1 - 1;
			}
			if (a[i] == 'E')
			{
				y2 = y1 + 1;
			}
			if (a[i] == 'W')
			{
				y2 = y1 - 1;
			}
			line l;
			l = { x1,y1,x2,y2 };
			set1.insert(l);
			l = { x2,y2,x1,y1 };
			set1.insert(l);
			x1 = x2;
			y1 = y2;
		}
		cout << set1.size() / 2 * 5 + (a.size() - set1.size() / 2) << endl;
	}
	

}

