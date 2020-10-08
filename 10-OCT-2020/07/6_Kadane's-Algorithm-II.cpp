
// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-ii/1

//User function Template for C++

//Complete this function



long long solve(int a[], int n, vector<long long> &dp) {
	if (n <= 0)
		return 0ll;
	if (dp[n - 1] != -1)
		return dp[n - 1];
	long long i = solve(a, n - 1, dp);
	long long j = solve(a, n - 2, dp) + a[n - 1];
	return dp[n - 1] = max(i, j);
}

long long maximumSum(int arr[], int n)
{
	//print corresponding values and at the end print next line and return the maximum sum
	vector<long long> dp(n + 1, -1);
	long long ma = INT_MIN;

	for (int i = 0; i < n; i++) {
		if (arr[i] >= 0)
			return solve(arr, n, dp);
		ma = max(ma, (long long)arr[i]);
	}
	return ma;
}