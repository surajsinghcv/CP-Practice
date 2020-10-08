
// https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1

class Solution {


public:
	int maxSumIS(int arr[], int n)
	{
		// Your code goes here
		vector<int> dp(n + 1);
		for (int i = 0; i < n; i++) {
			dp[i] = arr[i];
		}

		int ma = dp[0];

		for (int i = 1; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (arr[i] > arr[j]) {
					dp[i] = max(dp[i], dp[j] + a[i]);
				}
			}
			ma = max(ma, dp[i]);
		}

		return ma;
	}
};