#include <iostream>
#include <set>
class sets
{
private:
	std::set<int> first;
	std::set<int> second;
public:
	void InsertIntoFirst(int value)
	{
		first.insert(value);
	}
	void EraseFromFirst(int value)
	{
		first.erase(value);
	}
	void checkfirst() const
	{
		std::cout << "first set is: ";
		std::set<int>:: iterator i = this->first.begin();
		for (; i != this->first.end(); ++i)
		{
			std::cout << *i << ' ';
		}
		std::cout << std::endl;
	}
	void InsertIntoSecond(int value)
	{
		second.insert(value);
	}
	void EraseFromSecond(int value)
	{
		second.erase(value);
	}
	void checksecond() const
	{
		std::cout << "second set is: ";
		std::set<int>::iterator i = this->second.begin();
		for (; i != this->second.end(); ++i)
		{
			std::cout << *i << ' ';
		}
		std::cout << std::endl;
	}
	void GetSetIntersection()
	{
		std::set<int>::iterator i = this->first.begin();
		std::set<int>::iterator j = this->second.begin();
		std::cout << "intersection is: ";
		while (i != this->first.end() && j != this->second.end())
		{
			if (*i < *j)
			{
				++i;
				continue;
			}
			if (*i == *j)
			{
				std::cout << *i << ' ';
				++i;
				++j;
				continue;
			}
			if (*i > *j)
			{
				++j;
				continue;
			}

		}
	}

};

int main()
{
	sets b;
	b.InsertIntoFirst(5);
	b.InsertIntoFirst(5);
	b.InsertIntoFirst(3);
	b.InsertIntoFirst(9);
	b.InsertIntoFirst(15);
	b.InsertIntoFirst(7);
	b.checkfirst();
	b.EraseFromFirst(5);
	b.checkfirst();
	b.EraseFromFirst(7);
	b.checkfirst();
	b.EraseFromFirst(7);
	b.InsertIntoFirst(7);
	b.InsertIntoFirst(17);
	b.InsertIntoFirst(18);

	b.checkfirst();

	b.InsertIntoSecond(6);
	b.InsertIntoSecond(3);
	b.InsertIntoSecond(10);
	b.InsertIntoSecond(9);
	b.checksecond();
	b.EraseFromSecond(3);
	b.checksecond();
	b.EraseFromSecond(3);
	b.checksecond();
	b.EraseFromSecond(10);
	b.checksecond();
	b.InsertIntoSecond(11);
	b.checksecond();
	b.InsertIntoSecond(3);
	b.InsertIntoSecond(17);
	b.checksecond();

	b.GetSetIntersection();



}