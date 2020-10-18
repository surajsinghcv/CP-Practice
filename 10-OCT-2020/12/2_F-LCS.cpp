
// https://atcoder.jp/contests/dp/tasks/dp_f

#include<bits/stdc++.h>
using namespace std;

string solve(string a, string b) {
	int n = a.length(), m = b.length();

	vector<vector<int>> dp(n + 1, vector<int> (m + 1));

	for (int i = 0; i <= n; i++)
		dp[i][0] = 0;
	for (int i = 0; i <= m; i++)
		dp[0][i] = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i - 1] == b[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	string ans = "";
	while (n > 0 && m > 0) {
		if (a[n - 1] == b[m - 1]) {
			ans = a[n - 1] + ans;
			n--, m--;
		}
		else if (dp[n - 1][m] > dp[n][m - 1])
			n--;
		else
			m--;
	}

	return ans;
}

int main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
	string a, b;
	cin >> a >> b;

	cout << solve(a, b);

	return 0;
}