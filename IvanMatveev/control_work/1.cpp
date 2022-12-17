#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

struct Wood {
	public:
		double length_, width_, height_, weigth_;
		Wood(double len, double wid, double hei, double wei) {
		length_ = len;
		width_ = wid;
		height_ = hei;
		weigth_ = wei;
		}
		Wood(Wood& w) {
			this->length_ = w.length_;
			this->width_ = w.width_;
			this->height_ = w.height_;
			this->weigth_ = w.weigth_;
		}
		Wood operator=(const Wood& w1)  {
			this->length_ = w1.length_;
			this->width_ = w1.width_;
			this->height_ = w1.height_;
			this->weigth_ = w1.weigth_;
			return *this;
		}
		double GetLength() {
			return length_;
		}
		double GetWidth() {
			return width_;
		}
		double GetHeigth() {
			return height_;
		}
		double GetWeigth() {
			return weigth_;
		}
		void SetLength(double x) {
			length_ = x;
		}
		void SetWidth(double x) {
			width_ = x;
		}
		void SetHeigth(double x) {
			height_ = x;
		}
		void SetWeigth(double x) {
			weigth_ = x;
		}
		double GetVolume() {
			return length_ * width_ * height_;
		}
		double GetDensity() {
			return weigth_ / this->GetVolume();
		}
};
int main() {

}
