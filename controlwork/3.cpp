#include<iostream>
#include<set>

using namespace std;

int main() {
	set<int> s1;
	set<int> s2;
	set<int> sintsect;
	int x;
	cin >> x;
	if (s1.find(x) != s1.end()) {
		s1.insert(x);
	}
	if (s2.find(x) != s2.end()) {
		s2.insert(x);
	}
	if (s1.find(x) != s1.end()) {
		s1.erase(x);
	}
	if (s2.find(x) != s2.end()) {
		s2.erase(x);
	}
	for (auto& item : s1) {
		if (s2.find(item) != s2.end()) {
			sintsect.insert(item);
		}
	}
	for (auto& item : s2) {
		if (s1.find(item) != s1.end()) {
			sintsect.insert(item);
		}
	}
	return 0;
}