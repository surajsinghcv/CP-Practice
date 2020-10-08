
// https://practice.geeksforgeeks.org/problems/shortest-common-supersequence/0

#include<bits/stdc++.h>
using namespace std;

int solve(string a, string b) {
	int n = a.length(), m = b.length();
	vector<vector<int>> dp(n + 1, vector<int>(m + 1));

	for (int i = 0; i <= n; i++)
		dp[i][0] = 0;
	for (int i = 0; i <= m; i++)
		dp[0][i] = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	return n + m - dp[n][m];
}

int main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

	int t;
	cin >> t;

	string a, b;

	while (t--) {
		cin >> a >> b;
		cout << solve(a, b) << "\n";
	}

	return 0;
}