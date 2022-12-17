#include <map>
#include<set>
#include<iostream>
#include <cmath>

class mapwork
{
public:
	mapwork();
	~mapwork();
	void FirstSetTo(int x, int y) {
		first = { x, y };
	}
	void SecondSetTo(int x, int y) {
		second = { x, y };
	}
	bool FirstIsSet(int x) {
		return (first.count(x));
	}
	bool SecondIsSet(int x) {
		return (second.count(x));
	}
	std::map<int, int> GetMapIntersection() {
		std::map<int, int> temp;
		for (const auto& p : first)
		{
			temp.insert(p.first, p.second);
		}
		for (const auto& p : second)
		{
			if (!temp.count(p.first)) temp.insert(p.first, p.second);
			else if (abs(temp[p.first]) < abs(p.second)) temp[p.first] = p.second;
		}
		return temp;
	}

private:
	std::map<int, int> first;
	std::map<int, int> second;

};

void PrintMap(std::map<int, int> a)
{
	for (const auto& p : a)
	{
		std::cout << p.first << ' ' << p.second << std::endl;
	}
}

mapwork::mapwork()
{
}

mapwork::~mapwork()
{
}

int main() {
}