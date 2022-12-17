#pragma once

#include <iostream>
#include <set>

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

