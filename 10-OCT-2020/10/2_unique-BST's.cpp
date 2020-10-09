
// https://practice.geeksforgeeks.org/problems/unique-bsts/0

#include<bits/stdc++.h>
using namespace std;

int solve(int n) {
	vector<int> dp(n + 1, 0);
	dp[0] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			dp[i] += dp[j] * dp[i - j - 1];
		}
	}

	return dp[n];
}

int main() {

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		cout << solve(n) << "\n";
	}

	return 0;
}