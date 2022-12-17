#include "3.h"
#include <iostream>
#include <set>
#include <list>

std::set<int> InsertIntoFirst(int value, std::set<int> massive)
{
	massive.insert(value);
	return massive;
}

std::set<int> InsertIntoSecond(int value, std::set<int> massive)
{
	massive.insert(value);
	return massive;
}

std::set<int> EraseFromFirst(int value, std::set<int> massive)
{
	massive.erase(value);
	return massive;
}

std::set<int> EraseFromSecond(int value, std::set<int> massive)
{
	massive.erase(value);
	return massive;
}

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
