
// https://cses.fi/problemset/task/1637/

#include<bits/stdc++.h>
using namespace std;

int solve(int n) {
	vector<long> dp(n + 1, INT_MAX);
	dp[0] = 0;
	int temp;

	for (int i = 1; i <= n; i++) {
		temp = i;
		while (temp) {
			dp[i] = min(dp[i], dp[i - (temp % 10)] + 1);
			temp /= 10;
		}
	}
	return dp[n];
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