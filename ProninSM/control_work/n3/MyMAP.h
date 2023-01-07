#pragma once
#include <iostream>
#include <map>
#include <vector>
class MyMAP {
private:
	std::map<int, int> m1;
	std::map<int, int> m2;
public:
	void FirstSetTo(int x, int y) {
		m1[x] = y;
	}
	void SecondSetTo(int x, int y) {
		m2[x] = y;
	}
	bool FirstIsSet(int x) const {
		for (auto i : m1) {
			if (i.first == x ) {
				return true;
			}
		}
		return false;
	}
	bool SecondIsSet(int x) const {
		for (auto i : m2) {
			if (i.first == x) {
				return true;
			}
		}
		return false;
	}
	std::map<int,int> GetMapIntersection() {
		std::vector <int> k1;
		std::vector <int> k2;
		std::map<int, int> ans;
		for (auto i : m1) {
			k1.push_back(i.first);
		}
		for (auto i : m2) {
			k2.push_back(i.first);
		}
		int ind1 = 0, ind2 = 0;
		while (ind1 < k1.size() && ind2 < k2.size()) {
			if (k1[ind1] == k2[ind2]) {
				if (m1[k1[ind1]] >= m2[k2[ind2]]) {
					ans[k1[ind1]] = m1[k1[ind1]];
				}
				else {
					ans[k1[ind1]] = m2[k1[ind1]];
				}
				ind1++;
				ind2++;
			}
			else if (k1[ind1]<k2[ind2]){
				ans[k1[ind1]] = m1[k1[ind1]];
				ind1++;
			}
			else {
				ans[k2[ind2]] = m2[k2[ind2]];
				ind2++;
			}
		}
		if (ind1 < k1.size()) {
			while (ind1 < k1.size()) {
				ans[k1[ind1]] = m1[k1[ind1]];
				ind1++;
			}
		}
		else if (ind2<k2.size()) {
			while (ind2 < k2.size()) {
				ans[k2[ind2]] = m2[k2[ind2]];
				ind2++;
			}
		}
		return ans;
	}
};