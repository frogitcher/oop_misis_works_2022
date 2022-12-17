class Brusok
{

private:
	int length = 0;
	int width = 0;
	int height = 0;
	int weight = 0;

public:
	Brusok();

	Brusok(int length, int width, int height, int weight) {
		this->length = length;
		this->width = width;
		this->height = height;
		this->weight = weight;
	};
	~Brusok();

	int GetVolume() {
		return (length * width * height);
	}

	double GetDensity() {
		double k = (this->weight / GetVolume());
		return k;
	}

	int GetLength() {
		return this->length;
	}

	int GetWidth() {
		return this->width;
	}

	int GetHeight() {
		return this->height;
	}

	int GetWeight() {
		return this->width;
	}

	void SetLength(int length) {
		this->length = length;
	}
	void SetWidth(int width) {
		this->width = width;
	}
	void SetHeight(int height) {
		this->height = height;
	}
	void SetWeight(int weight) {
		this->weight = weight;
	}

	void operator=(Brusok temp) {
		this->length = temp.length;
		this->width = temp.width;
		this->height = temp.height;
		this->weight = temp.weight;
	}
};


Brusok::Brusok()
{
}

Brusok::~Brusok()
{
}


int main() 
{

}