
// https://practice.geeksforgeeks.org/problems/ways-to-write-n-as-sum/0

#include<bits/stdc++.h>
using namespace std;

int countWays(int n)
{
    // your code here
    int **dp = new int*[n + 1];
    for(int i = 0; i <= n; i++)
        dp[i] = new int[n + 1];

    for(int i = 0; i <= n; i++)
    {
        dp[0][i] = 0;
        dp[i][0] = 1;
    }
    
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if(j >= i)
                dp[i][j] += dp[i][j - i];
            dp[i][j] %= 1000000007;
        }
    }
    return dp[n - 1][n] %= 1000000007;
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", countWays(n));
    }
}