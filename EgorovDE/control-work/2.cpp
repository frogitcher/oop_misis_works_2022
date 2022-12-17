#include <iostream>
#include <string>
#include <vector>
using namespace std;

string toCase (string str){
	vector<int> LowerCase;
	vector<int> UpperCase;
	for (int i = 0; i < str.length(); i++) {
		if (int(str[i]) > 64 && int(str[i]) < 91)
		{
			UpperCase.push_back(i);
		}

		else if (int(str[i]) > 96 && int(str[i]) < 123)
		{
			LowerCase.push_back(i);
		}
	}
	
	bool k = LowerCase.size() < UpperCase.size();

	switch (k)
	{
	case 0:
		for (int i : UpperCase)
		{
			str[i] = char(str[i] + 32);
		}
		break;
	case 1:
		for (int i : LowerCase)
		{
			str[i] = char(str[i] - 32);
		}
		break;
	}

	return str;
}

int main() {

}