
// http://codeforces.com/problemset/problem/320/A

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	int count = 0;
	if (s[0] == '4' || (s[0] != '4' && s[0] != '1')) {
		cout << "NO";
		return 0;
	}

	for (int i = 1; i < s.length(); i++) {
		if (s[i] != '4' && s[i] != '1') {
			cout << "NO";
			return 0;
		}
		if (s[i] == '4') {
			if (s[i - 1] != '1' && s[i - 1] != '4') {
				cout << "NO";
				return 0;
			}
			count++;
		}
		else {
			count = 0;
		}

		if (count > 2) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";

	return 0;
}