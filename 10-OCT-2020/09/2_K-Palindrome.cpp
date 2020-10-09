
// https://practice.geeksforgeeks.org/problems/find-if-string-is-k-palindrome-or-not1923/1

class Solution {
public:
	int kPalindrome(string a, int n, int k)
	{
		// code here
		vector<vector<int>> dp(n + 1, vector<int>(n + 1));

		for (int i = 0; i <= n; i++) {
			dp[i][0] = i;
			dp[0][i] = i;
		}

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (a[i - 1] == a[n - j]) {
					dp[i][j] = dp[i - 1][j - 1];
				}
				else {
					dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + 1;
				}
			}
		}
		return dp[n][n] <= k * 2;
	}
};