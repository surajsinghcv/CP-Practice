
// https://cses.fi/problemset/task/1745/

#include<bits/stdc++.h>
using namespace std;

set<int> ans;

void solve(vector<int> v, int n, int sum, vector<vector<int>> &dp) {

	if (n == 0) {
		ans.insert(sum);
		return;
	}
	if (dp[n][sum] != -1)
		return;
	solve(v, n - 1, sum, dp);
	solve(v, n - 1, sum + v[n - 1], dp);
	dp[n][sum] = 1;
	return;
}

int main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

	int n, sum = 0;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
	}

	vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));

	solve(v, n, 0, dp);

	cout << ans.size() - 1 << "\n";

	for (auto i : ans) {
		if (i == 0)
			continue;
		cout << i << " ";
	}

	return 0;
}