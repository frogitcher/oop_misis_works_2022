#include <exception>
#include <iostream>

class IllegalBrickException : std::exception {
public:
	const char* what() {
		return "Illegal brick argument";
	}
};

class Brick {
private:
	int length_ = 0, width_ = 0, height_ = 0, weight_ = -1;

public:
	Brick(int length = 1, int width = 1, int height = 1, int weight = 1) {
		if (length <= 0 || width <= 0 || height <= 0 || weight <= 0)
			throw IllegalBrickException();

		length_ = length;
		width_ = width;
		height_ = height;
		weight_ = weight;
	}

	~Brick() {
		// nothing to release
	}

	int GetLength() {
		return length_;
	}

	int GetWidth() {
		return width_;
	}

	int GetHeight() {
		return height_;
	}

	int GetVolume() {
		return length_ * width_ * height_;
	}

	double GetDensity() {
		return ((double) weight_) / GetVolume();
	}

	void SetLength(int length) {
		if (length <= 0)
			throw IllegalBrickException();

		length_ = length;
	}

	void SetWidth(int width) {
		if (width <= 0)
			throw IllegalBrickException();

		width_ = width;			
	}

	void SetHeight(int height) {
		if (height <= 0)
			throw IllegalBrickException();

		height_ = height;
	}

	void SetWeight(int weight) {
		if (weight <= 0)
			throw IllegalBrickException();

		weight_ = weight;
	}

	void operator=(const Brick& that) {
		length_ = that.length_;
		width_ = that.width_;
		height_ = that.height_;
		weight_ = that.weight_;
	}
};

int main() {
	Brick a(1, 2, 3, 4);
	Brick b(3, 2, 1, 4);

	std::cout << a.GetVolume() << ' ' << a.GetDensity() << '\n';

	b.SetWidth(54);
	std::cout << b.GetVolume() << ' ' << b.GetDensity() << '\n';

	b.SetWeight(22);
	std::cout << b.GetVolume() << ' ' << b.GetDensity() << '\n';	

	a = b;
	std::cout << a.GetVolume() << ' ' << a.GetDensity() << '\n';

	try {
		a.SetWeight(-1);
	} catch (IllegalBrickException ib) {
		std::cout << "ooooops" << '\n';
	}

	try {
		a.SetLength(-1);
	} catch (IllegalBrickException ib) {
		std::cout << "ooooops" << '\n';
	}
}