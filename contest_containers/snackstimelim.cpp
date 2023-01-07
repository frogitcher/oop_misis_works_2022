#include<iostream>
#include<vector>
#include<set>
using namespace std;
struct Cmp { bool operator()(const int& a, const int& b) const { return a > b; } };
int main() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i += 1) {
		int r;
		cin >> r;
		v.push_back(r);
	}
	int nr = n;
	set<int, Cmp> min;
	for (int f = 0; f < n; f += 1) {
		if ((v[f] == nr) && (min.size() == 0)) {
			cout << v[f] << endl;
			nr -= 1;
		}
		else if ((v[f] == nr) && (min.size() != 0)) {
			cout << v[f] << ' ';
			nr -= 1;
			vector<int> yd;
			int kyd = 0;
			for (int it : min) {
				if (it == nr) {
					cout << it << ' ';
					kyd += 1;
					yd.push_back(it);
					nr -= 1;
				}
			}
			for (int g = 0; g < kyd; g += 1) {
				min.erase(yd[g]);
			}
			cout << endl;
		}
		else if (v[f] < nr) {
			min.insert(v[f]);
			cout << endl;
		}
	}
	return 0;
}
