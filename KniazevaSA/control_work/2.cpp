#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	string s;
	cin >> s;
	int diff = 'A' - 'a';
	vector<int> countsa(26);
	vector<int> countsA(26);
	for (char c : s) {
		if ('a' <= c && c <= 'z') {
			countsa[c - 'a']++;
		}
		if ('A' <= c && c <= 'Z') {
			countsA[c - 'A']++;
		}
	}
	int suma = 0;
	for (int& element : countsa) {
		suma += element;
	}

	int sumA = 0;
	for (int& element : countsA) {
		sumA += element;
	}

	if (suma > sumA) {
		for (char c : s) {
			if ('A' <= c && c <= 'Z') {
				c -= diff;
			}
		}
	}
	if (suma < sumA) {
		for (char c : s) {
			if ('a' <= c && c <= 'z') {
				c += diff;
			}
		}
	}

	cout << s << endl;

}