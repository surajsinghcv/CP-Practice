
// https://cses.fi/problemset/task/1638/

#include<bits/stdc++.h>
using namespace std;

#define mod (int)1e9+7

int solve(int n) {

	vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
	dp[0][0] = 1;

	string s;

	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < n; j++) {
			if (s[j] == '.') {
				if (i > 0) {
					dp[i][j] += (dp[i - 1][j]);
				}
				if (j > 0) {
					dp[i][j] += (dp[i][j - 1]);
				}
				dp[i][j] %= mod;
			}
			else {
				dp[i][j] = 0;
			}
		}
	}
	return dp[n - 1][n - 1];
}

int main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

	int n;
	cin >> n;

	cout << solve(n);

	return 0;
}