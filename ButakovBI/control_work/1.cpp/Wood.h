#pragma once

#include <iostream>

class Wood
{
public:

	Wood& operator=(const Wood& n);
	double GetLength();
	double GetWidth();
	double GetHeight();
	double GetWeight();

	double SetLength();
	double SetWidth();
	double SetHeight();
	double SetWeight();

	double length = SetLength();
	double width = SetWidth();
	double height = SetHeight();
	double weight = SetWeight();

	double GetVolume() const;
	double GetDencity() const;

};