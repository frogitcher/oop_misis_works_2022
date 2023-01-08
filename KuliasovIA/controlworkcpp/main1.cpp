#include <iostream>


class ring {
private:
	int n, x;
	void normalize()
	{
		n = (n % x + x) % x;
	}

public:
	ring(int n_ = 0, int x_ = 1)
		: n{ n_ }, x{ x_ } {
		normalize();
	};
	int GetValue() const { return n; }
	int GetMod() const { return x; }
	int operator + (ring const& rhs) const
	{
		try
		{
			if (this->x != rhs.x) throw "mods are different!";
		}
		catch (const char* msg)
		{
			std::cout << msg << std::endl;
		}
		return ((GetValue() + rhs.GetValue())%x+x)%x;
	}
	
	int operator - (ring const& rhs) const
	{
		try
		{
			if (this->x != rhs.x) throw "mods are different!";
		}
		catch (const char* msg)
		{
			std::cout << msg << std::endl;
		}
		return ((GetValue() - rhs.GetValue()) % x + x) % x;
	}
	int operator * (ring const& rhs) const
	{
		try
		{
			if (this->x != rhs.x) throw "mods are different!";
		}
		catch (const char* msg)
		{
			std::cout << msg << std::endl;
		}
		return ((GetValue() * rhs.GetValue()) % x + x) % x;
	}
	void operator = (ring const& rhs)
	{
		this->n = rhs.GetValue();
		this->x = rhs.x;
	}
	~ring() = default;
};
	
int main()
{
	ring r1 = { 2, 5 };
	ring r2 = { 4, 5 };
	ring r3 = { 6, 8 };
	std::cout << r1 + r2 << std::endl;
	std::cout << r2 - r1 << std::endl;
	std::cout << r1 - r2 << std::endl;
	std::cout << r1 * r2 << std::endl;
	std::cout << r1 - r3 << std::endl;
	r1 = r3;
	std::cout << r1.GetValue() << ' ' << r1.GetMod() << std::endl;
}
