#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <sstream> 

using namespace std;

int main() {

	int t;
	cin >> t;
	int n;
	string str1;
	string str2;
	string str3;

	map <int, vector<string>> mpp;
	map <int, vector<int>> result;

	for (int i = 0; i < t; i++) {
		vector<string> mp;
		cin >> n;
		string s;

		getline(cin, str1);
		getline(cin, str1);
		mp.push_back(str1);

		getline(cin, str2);
		mp.push_back(str2);

		getline(cin, str3);
		mp.push_back(str3);

		mpp[i] = mp;

		vector<int> v(3);
		result[i] = v;

	}


	for (pair<int, vector<string>> it : mpp) {
		map <string, vector<int>> cwords;
		vector<string> vec = it.second;
		for (int i = 0; i < vec.size(); i++) {
			string s;
			stringstream ss(vec[i]);
			vector<string> v;

			while (getline(ss, s, ' ')) {
				v.push_back(s);
				cwords[s].push_back(i);
			}
		}

		for (pair<string, vector<int>> i : cwords) {
			vector<int> count = i.second;

			if (count.size() < 3) {
				if (count.size() == 1) {
					result[it.first].at(count[0]) += 3;
				}
				else if (count.size() == 2) {
					result[it.first].at(count[0])++;
					result[it.first].at(count[1])++;

				}

			}

		}
	}
	cout << endl;
	for (pair<int, vector<int>> it : result) {
		for_each(it.second.begin(), it.second.end(), [](const int& element) {
			cout << element << " ";
			});
		cout << endl;
	}
}