
// https://practice.geeksforgeeks.org/problems/coin-change-number-of-ways/1

//User function Template for C++

//Complete this function
long long numberOfWays(int coins[],int n,int val)
{
    long long **dp = new long long*[n + 1];
    for(int i = 0; i <= n; i++)
        dp[i] = new long long[val + 1];

    for(int i = 0; i <= val; i++)
        dp[0][i] = 0;
    for(int i = 0; i <= n; i++)
        dp[i][0] = 1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= val; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if(j >= coins[i - 1])
                dp[i][j] += dp[i][j - coins[i - 1]];
        }
    }
    return dp[n][val];
}