
// https://cses.fi/problemset/task/1746/

#include <bits/stdc++.h>
using namespace std;

#define mod (int)1e9+7

int solve(vector<int> v, int n, int m) {

	vector<vector<int>> dp(n, vector<int>(m + 1, 0));

	if (v[0] == 0) {
		for (int i = 0; i <= m; i++)
			dp[0][i] = 1;
	}
	else
		dp[0][v[0]] = 1;

	for (int i = 1; i < n; i++) {
		if (v[i] == 0) {
			for (int j = 1; j <= m; j++) {
				for (int k : {j - 1, j, j + 1}) {
					if (k >= 1 && k <= m) {
						(dp[i][j] += dp[i - 1][k]) %= mod;
					}
				}
			}
		} else {
			for (int k : {v[i] - 1, v[i], v[i] + 1}) {
				if (k >= 1 && k <= m) {
					(dp[i][v[i]] += dp[i - 1][k]) %= mod;
				}
			}
		}
	}

	int ans = 0;
	for (int j = 1; j <= m; j++) {
		(ans += dp[n - 1][j]) %= mod;
	}

	return ans;
}

int main() {

	int n, m;
	cin >> n >> m;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	cout << solve(v, n, m);

	return 0;
}