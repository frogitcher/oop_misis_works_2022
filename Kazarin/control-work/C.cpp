#include <map>
#include <iostream>

class TwoMaps {
private:
	std::map<int, int> mp_a_, mp_b_;

	int max(int a, int b) {
		return a > b ? a : b;
	}

	int abs(int a) {
		return a < 0 ? -a : a;
	}

public:
	void FirstSetTo(int x, int y) {
		mp_a_[x] = y;
	}

	void SecondSetTo(int x, int y) {
		mp_b_[x] = y;
	}

	bool FirstIsSet(int x) {
		return mp_a_.find(x) != mp_a_.end();
	}

	bool SecondIsSet(int x) {
		return mp_b_.find(x) != mp_b_.end();
	}
 
 	std::map<int, int> GetMapsUnion() {
		std::map<int, int> res;

		for (auto p: mp_a_) {
			res[p.first] = p.second;
		}

		for (auto p: mp_b_) {
			auto iter = res.find(p.first);

			if (iter == res.end()) {
				res[p.first] = p.second;
			} else {
				res[p.first] = abs(iter->second) > abs(p.second) ? iter->second : p.second;
			}
		}

		return res;		
	}
};

int main() {
	TwoMaps maps;

	maps.FirstSetTo(1, 2);
	maps.FirstSetTo(3, -10);
	maps.FirstSetTo(5, 50);

	maps.SecondSetTo(54, 228);
	maps.SecondSetTo(3, 2);
	maps.SecondSetTo(5, -11);

	std::map<int, int> total = maps.GetMapsUnion();

	for (auto p: total)
		std::cout << p.first << ": " << p.second << '\n';
}