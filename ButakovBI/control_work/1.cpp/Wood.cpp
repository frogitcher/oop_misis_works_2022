#include "Wood.h"


Wood& Wood::operator=(const Wood& n) {
	return *this;
}

double Wood::SetLength() {
	double length;
	std::cin >> length;
	return length;
}
double Wood::SetWidth() {
	double width;
	std::cin >> width;
	return width;
}
double Wood::SetHeight() {
	double height;
	std::cin >> height;
	return height;
}
double Wood::SetWeight() {
	double weight;
	std::cin >> weight;
	return weight;
}

double Wood::GetLength() { return length; }
double Wood::GetWidth() { return width; }
double Wood::GetHeight() { return height; }
double Wood::GetWeight() { return weight; }

double Wood::GetVolume() const { return length * width * height; }
double Wood::GetDencity() const { return weight / GetVolume(); }
