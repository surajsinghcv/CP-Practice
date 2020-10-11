
// https://practice.geeksforgeeks.org/problems/max-sum-without-adjacents2430/1

//User function template for C++
class Solution {
public:
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
		// code here
		int *dp = new int[n + 1];
		dp[0] = 0; dp[1] = arr[0];

		for (int i = 2; i <= n; i++) {
			dp[i] = max(dp[i - 1], dp[i - 2] + arr[i - 1]);
		}
		return dp[n];
	}
};