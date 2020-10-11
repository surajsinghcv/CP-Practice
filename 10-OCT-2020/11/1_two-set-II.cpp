
// https://cses.fi/problemset/task/1093/

#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

int solve(vector<int> v, int n, int sum) {
	vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));

	dp[0][0] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
			dp[i][j] = dp[i - 1][j];
			if (j >= v[i - 1])
				dp[i][j] += dp[i - 1][j - v[i - 1]];
			dp[i][j] %= mod;
		}
	}
	return dp[n][sum];
}

int main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

	int n, sum;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		v[i] = i + 1;

	sum = (n * (n + 1)) / 2;
	if (sum & 1) {
		cout << 0 << "\n";
		return 0;
	}

	sum >>= 1;

	vector<vector<int>> dp(n + 1, vector<int>(sum + 1));

	cout << solve(v, n, sum);

	return 0;
}