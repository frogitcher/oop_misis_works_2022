#include <iostream>
#include "1.h"


WoodenSomething::WoodenSomething(double length, double width, double height, double weight) {
    this->_length = length;
    this->_width = width;
    this->_height = height;
    this->_weight = weight;
}

WoodenSomething::WoodenSomething() {
    this->_length = 0;
    this->_width = 0;
    this->_height = 0;
    this->_weight = 0;
}

WoodenSomething::~WoodenSomething() = default;

WoodenSomething &WoodenSomething::operator=(const WoodenSomething &other) = default;

double WoodenSomething::GetVolume() const {
    return this->_length * this->_width * this->_height;
}

double WoodenSomething::GetDensity() const {
    return this->_weight / this->GetVolume();
}

double WoodenSomething::GetLength() const {
    return this->_length;
}

double WoodenSomething::GetWidth() const {
    return this->_width;
}

double WoodenSomething::GetHeight() const {
    return this->_height;
}

double WoodenSomething::GetWeight() const {
    return this->_weight;
}

void WoodenSomething::SetLength(double x) {
    this->_length = x;
}

void WoodenSomething::SetWidth(double x) {
    this->_width = x;
}

void WoodenSomething::SetHeight(double x) {
    this->_height = x;
}

void WoodenSomething::SetWeight(double x) {
    this->_weight = x;
}



void describe(WoodenSomething &smth) {
    std::cout << "_width=" << smth.GetWidth() << "; _height=" << smth.GetHeight() << "; _length=" << smth.GetLength()
              << "; _weight = " << smth.GetWeight();
    std::cout << "; volume " << smth.GetVolume();
    std::cout << "; density " << smth.GetDensity() << std::endl;
}

int main() {
    auto smth = WoodenSomething(1, 2, 3, 4);
    describe(smth);
    smth.SetLength(228);
    smth.SetWidth(1337.228);
    smth.SetHeight(123);
    smth.SetWeight(128.256);
    describe(smth);
    smth = WoodenSomething(1, 2, 3, 4);
    describe(smth);
    smth = WoodenSomething();
    describe(smth);
}