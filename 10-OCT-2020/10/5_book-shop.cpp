
// https://cses.fi/problemset/task/1158/

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> h, vector<int> s, int n, int x) {
	vector<vector<int>> dp(n + 1, vector<int>(x + 1));

	for (int i = 0; i <= n; i++)
		dp[i][0] = 0;
	for (int i = 0; i <= x; i++)
		dp[0][i] = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= x; j++) {
			dp[i][j] = dp[i - 1][j];
			if (j >= h[i - 1])
				dp[i][j] = max(dp[i][j], dp[i - 1][j - h[i - 1]] + s[i - 1]);
		}
	}
	return dp[n][x];
}

int main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

	int n, x;
	cin >> n >> x;

	vector<int> h(n), s(n);
	for (int i = 0; i < n; i++)
		cin >> h[i];
	for (int i = 0; i < n; i++)
		cin >> s[i];

	cout << solve(h, s, n, x);

	return 0;
}