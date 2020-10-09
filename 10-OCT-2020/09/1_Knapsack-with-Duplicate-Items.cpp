
// https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1

// User function Template for C++

class Solution {
public:
	int knapSack(int n, int w, int val[], int wt[])
	{
		// code here
		vector<vector<int>> dp(n + 1, vector<int>(w + 1));

		for (int i = 0; i <= n; i++)
			dp[i][0] = 0;
		for (int i = 0; i <= w; i++)
			dp[0][i] = 0;

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= w; j++) {
				dp[i][j] = dp[i - 1][j];
				if (j >= wt[i - 1])
					dp[i][j] = max(dp[i][j], max(dp[i - 1][j - wt[i - 1]], dp[i][j - wt[i - 1]]) + val[i - 1]);
			}
		}
		return dp[n][w];
	}
};