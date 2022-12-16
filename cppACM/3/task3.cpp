#include <iostream>
#include <vector>
using namespace std;

vector<int> prefix_function (string s) {
	int n = (int) s.length();
	vector<int> pi (n);
	for (int i=1; i<n; ++i) {
		int j = pi[i-1];
		while (j > 0 && s[i] != s[j])
			j = pi[j-1];
		if (s[i] == s[j])  ++j;
		pi[i] = j;
	}
	return pi;
}

int kmp(string P, string T) {
   int pl = P.length();
   int tl = T.length();
   int answer = 0;
   vector<int> q = prefix_function(P + "#" + T);
   int p[q.size()];
   copy(q.begin(), q.end(), p);

   for (int i = 0; i < tl; i++)
      if (p[pl + i + 1] == pl) answer++;
   return answer;
}
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    cout << kmp(s1, s2);
}