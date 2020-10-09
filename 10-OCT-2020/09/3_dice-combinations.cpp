
// https://cses.fi/problemset/task/1633/

#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

int solve(int n, vector<int> &dp) {
	if (n == 0)
		return 1;
	if (dp[n] != -1)
		return dp[n];
	int temp = 0;
	for (int i = 1; i <= 6; i++) {
		if (n >= i) {
			temp += solve(n - i, dp);
			temp %= mod;
		}
	}
	return dp[n] = temp;
}

int main() {
	int n;
	cin >> n;

	vector<int> dp(n + 1, -1);

	cout << solve(n, dp);
	return 0;
}