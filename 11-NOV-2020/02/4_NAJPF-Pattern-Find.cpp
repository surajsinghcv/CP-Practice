
// https://www.spoj.com/problems/NAJPF/

#include<bits/stdc++.h>
using namespace std;

void solve(string txt, string pat) {
	int n = txt.length();
	int m = pat.length();

	int d = 256, q = 11;

	unsigned long int h = 0, temp = 0, mul = 1, count = 0;
	bool flag;

	vector<int> v;

	for (int i = 1; i < m; i++) {
		mul = (mul * d);
	}

	for (int i = 0; i < m; i++) {
		h = (d * h + pat[i]);
		temp = (temp * d + txt[i]);
	}

	for (int i = 0; i < n - m + 1; i++) {
		if (h == temp) {
			flag = 1;
			for (int j = 0; j < m; j++) {
				if (txt[i + j] != pat[j]) {
					flag = 0;
					break;
				}
			}
			if (flag)
				v.push_back(i + 1);
		}
		if (i < n - m) {
			temp = ((d * (temp - txt[i] * mul)) + txt[i + m]);
			if (temp < q)
				temp += q;
		}
	}

	if (v.size() == 0) {
		cout << "Not Found\n";
	}
	else {
		cout << v.size() << "\n";
		for (auto i : v) {
			cout << i << " ";
		}
		cout << "\n";
	}
	cout << "\n";

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
		string pat, txt;
		cin >> txt >> pat;

		solve(txt, pat);
	}

	return 0;
}