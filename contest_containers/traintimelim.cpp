#include<iostream>
#include<string>
#include<unordered_set>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
int main() {
	long int t;
	cin >> t;
	vector<string> rez;
	for (long int j = 0; j < t; j += 1) {
		long int n, k;
		cin >> n >> k;
		unordered_multiset<long int> ums;
		vector<long int> ost;
		for (long int i = 0; i < n; i += 1) {
			long int u;
			cin >> u;
			ums.insert(u);
			ost.push_back(u);
		}
		for (long int i = 0; i < k; i += 1) {
			long int a, b;
			stack<long int> st;
			queue<long int> q;
			cin >> a >> b;
			for (long int f = 0; f < n; f += 1) {
				st.push(ost[f]);
				q.push(ost[f]);
			}
			if ((ums.find(a) == ums.end()) || (ums.find(b) == ums.end())) {
				rez.push_back("NO");
			}
			else {
				long int fl = 0;
				long int inda = 0, indb = 0;
				long int ind = n - 1;
				while (fl != 1) {
					if (st.top() == b) {
						indb = ind;
						fl = 1;
						break;
					}
					else {
						ind -= 1;
						st.pop();
					}
				}
				ind = 0;
				fl = 0;
				while (fl != 1) {
					if (q.front() == a) {
						inda = ind;
						fl = 1;
						break;
					}
					else {
						ind += 1;
						q.pop();
					}
				}
				if (inda < indb) {
					rez.push_back("YES");
				}
				else {
					rez.push_back("NO");
				}
			}

		}
	}
	long int dlrez = rez.size();
	for (long int j = 0; j < dlrez; j += 1) {
		cout << rez[j] << endl;
	}
	return 0;
}
