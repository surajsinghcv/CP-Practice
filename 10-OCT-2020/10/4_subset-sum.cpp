
// https://www.codechef.com/problems/TF01

#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int> v, int n, int sum) {
	vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1));

	for (int i = 0; i <= n; i++)
		dp[i][0] = 1;
	for (int i = 1; i <= sum; i++)
		dp[0][i] = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
			dp[i][j] = dp[i - 1][j];
			if (j >= v[i - 1])
				dp[i][j] = dp[i][j] || dp[i - 1][j - v[i - 1]];
		}
	}
	return dp[n][sum];
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int
	t;
	cin >> t;

	while (t--) {
		int n, sum;
		cin >> n >> sum;

		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];

		cout << solve(v, n, sum) << "\n";
	}
}