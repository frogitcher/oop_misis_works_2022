#include "3.h"
#include <iostream>
#include <set>
#include <list>

int main()
{
	std::set<int> a;
	std::set<int> b;
	InsertIntoFirst(5, a);
	InsertIntoSecond(2, b);
	EraseFromFirst(5, a);
	EraseFromSecond(2, b);
	return 0;
}
