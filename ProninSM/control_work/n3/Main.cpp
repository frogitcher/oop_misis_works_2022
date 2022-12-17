#include <iostream>
#include "MyMAP.h"

int main() {
	MyMAP m;
	std::cout << m.FirstIsSet(1) << std::endl;
	m.FirstSetTo(1, 2);
	m.FirstSetTo(2, 3);
	m.FirstSetTo(5,5);
	m.SecondSetTo(1, 1);
	m.SecondSetTo(3, 4);
	std::cout << m.FirstIsSet(1) << std::endl;
	std::cout << m.FirstIsSet(2) << std::endl;
	std::cout << m.SecondIsSet(2) << std::endl;
	std::map<int, int> ans;
	ans = m.GetMapIntersection();
	for (auto i : ans) {
		std::cout << i.first << ' ' << i.second << std::endl;
	}
}