#include <iostream>
#include "DB.h"

int main() {
	Brusok b1(5);
	std::cout << b1.GetDensity() << std::endl;
	std::cout << b1.GetVolume() << std::endl;
	std::cout << b1.GetLenght() << std::endl;
	std::cout << b1.GetWidth() << std::endl;
	std::cout << b1.GetHeight() << std::endl;
	std::cout << b1.GetWeight() << std::endl;
	Brusok b(5,5,5,5);
	std::cout << b.GetDensity() << std::endl;
	std::cout << b.GetVolume() << std::endl;
	std::cout << b.GetLenght() << std::endl;
	std::cout << b.GetWidth() << std::endl;
	std::cout << b.GetHeight() << std::endl;
	std::cout << b.GetWeight() << std::endl;
	b.SetHeight(1);
	b.SetLength(1);
	b.SetWidth(1);
	b.SetWeight(1);
	std::cout << b.GetDensity() << std::endl;
	std::cout << b.GetVolume() << std::endl;
	std::cout << b.GetLenght() << std::endl;
	std::cout << b.GetWidth() << std::endl;
	std::cout << b.GetHeight() << std::endl;
	std::cout << b.GetWeight() << std::endl;
}