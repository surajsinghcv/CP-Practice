
// https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence/0

#include<bits/stdc++.h>
using namespace std;

int solve(string a) {
	int n = a.length();
	vector<vector<int>> dp(n + 1, vector<int>(n + 1));

	for (int i = 0; i <= n; i++) {
		dp[i][0] = 0;
		dp[0][i] = 0;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i - 1] == a[n - j]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	return dp[n][n];
}

int main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

	int t;
	cin >> t;

	string a;

	while (t--) {
		cin >> a;
		cout << solve(a) << "\n";
	}

	return 0;
}