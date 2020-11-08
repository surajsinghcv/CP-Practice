
// https://codeforces.com/problemset/problem/116/B

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;

	vector<vector<char>> v(n + 2, vector<char> (m + 2, '.'));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> v[i][j];
		}
	}

	int count = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (v[i][j] == 'W') {
				if (v[i - 1][j] == 'P') {
					v[i - 1][j] = '.';
					count++;
				}
				else if (v[i][j - 1] == 'P') {
					v[i][j - 1] = '.';
					count++;
				}
				else if (v[i][j + 1] == 'P') {
					v[i][j + 1] = '.';
					count++;
				}
				else if (v[i + 1][j] == 'P') {
					v[i + 1][j] = '.';
					count++;
				}
			}
		}
	}

	cout << count << "\n";

	return 0;
}