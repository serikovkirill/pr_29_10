#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	string s, t, p = "password";
	cin >> t;
	s = p + '$' + t;
	int n = int(s.size());
	int m = int(p.size());
	vector <int> pr(n);
	for (int i = 1; i < n; ++i) {
		int d = pr[i - 1];
		while (d > 0 && s[i] != s[d])
			d = pr[d - 1];
		if (s[i] == s[d])
			++d;
		pr[i] = d;
		if (pr[i] == m)
		{
			for (int j = i - 2 * m + 8; j < i - 2 * m + 16; j++)
				t[j] = '*';
		}
	}
	cout << t;
}
