#pragma once
#include <iostream>
class Brusok {
private:
	int length,width,height,weight;

public:
	Brusok() {
		length = 1;
		width = 1;
		height = 1;
		weight = 1;
	}
	Brusok(int l=1, int w=1, int h=1, int m=1) {
		length = l;
		width = w;
		height = h;
		weight = m;
	}
	~Brusok() = default;
	int GetVolume() const {
		return length * width * height;
	}
	double GetDensity() const {
		return double(weight) / double(GetVolume());
	}
	int GetLenght() const {
		return length;
	}
	int GetWidth() const {
		return width;
	}
	int GetHeight() const {
		return height;
	}
	int GetWeight() const {
		return weight;
	}
	void SetLength(int x) {
		length = x;
	}
	void SetWidth(int x) {
		width = x;
	}
	void SetHeight(int x) {
		height = x;
	}
	void SetWeight(int x) {
		weight = x;
	}
};