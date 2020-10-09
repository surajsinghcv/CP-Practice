
// https://cses.fi/problemset/task/1634/

#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

int solve(vector<int> v, int n, int sum) {
	vector<vector<int>> dp(n + 1, vector<int>(sum + 1));

	for (int i = 0; i <= n; i++)
		dp[i][0] = 0;
	for (int i = 1; i <= sum; i++)
		dp[0][i] = INT_MAX;

	long a, b;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
			a = dp[i - 1][j];
			b = INT_MAX;
			if (j >= v[i - 1])
				b = dp[i][j - v[i - 1]];
			if (b < INT_MAX)
				b++;
			dp[i][j] = min(a, b);
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
	cin >> n >> sum;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];



	int ans = solve(v, n, sum);
	cout << (ans == INT_MAX ? -1 : ans);
	return 0;
}