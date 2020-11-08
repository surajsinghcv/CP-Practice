
// https://www.spoj.com/problems/NAJPF/

#include<bits/stdc++.h>
using namespace std;

void solve(string txt, string pat) {

	int n = txt.length();
	int m = pat.length();
	int j;

	vector<int> ans;

	vector<int> v(m);
	v[0] = 0;

	for (int i = 1; i < m; i++) {
		j = v[i - 1];
		while (j != 0 && txt[i] != pat[j]) {
			j = v[j - 1];
		}
		if (pat[i] == pat[j]) {
			j++;
		}
		v[i] = j;
	}

	j = v[0];
	for (int i = 0; i < n; i++) {
		while ((j != 0 && txt[i] != pat[j]) || (j == m)) {
			j = v[j - 1];
		}
		if (txt[i] == pat[j]) {
			j++;
		}
		if (j == m) {
			ans.push_back(i - j + 2);
		}
	}

	if (ans.size() == 0) {
		cout << "Not Found\n";
	}
	else {
		cout << ans.size() << "\n";
		for (auto i : ans) {
			cout << i << " ";
		}
		cout << "\n";
	}

	return;
}

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t;
	cin >> t;

	while (t--) {
		string txt, pat;
		cin >> txt >> pat;
		solve(txt, pat);
		cout << "\n";
	}

	return 0;
}