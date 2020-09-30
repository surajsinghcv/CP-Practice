
// https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1

// function to count ways to reach mth stair
long long countWays(int n){
    // your code here
    long long *dp = new long long[n + 1];
    dp[0] = 1;

    for(int i = 1; i <= n; i++)
    {
        dp[i] = 0;
        if(i >= 1)
            dp[i] += dp[i - 1];
        if(i >= 2)
            dp[i] += dp[i - 2];
        dp[i] %= 1000000007;
    }
    return dp[n];
}
