
// https://practice.geeksforgeeks.org/problems/coin-change-minimum-number-of-coins/1

//Complete this function
typedef long long ll;
long long solve(int a[], int n, int val)
{
    ll **dp = new ll*[n + 1];
    for(int i = 0; i <= n; i++)
    {
        dp[i] = new ll[val + 1];
    }
    
    for(int i = 1; i <= val; i++) dp[0][i] = LLONG_MAX;
    for(int i = 0; i <= n; i++) dp[i][0] = 0;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= val; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if(j >= a[i - 1] && dp[i][j - a[i - 1]] < LLONG_MAX)
            {
                dp[i][j] = min(dp[i][j - a[i - 1]] + 1, dp[i][j]);
            }
        }
    }
    
    return dp[n][val];
}

long long minimumNumberOfCoins(int coins[],int n,int v)
{
    // your code here
    long long ans = solve(coins, n, v);
    if(ans == LLONG_MAX) return -1;
    return ans;
}