
// https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1

// function to find longest common subsequence

int dp[105][105];

int solve(string a, string b, int x, int y)
{
    if(x == 0 || y == 0) return 0;
    if(dp[x- 1][y - 1] != -1) return dp[x - 1][y - 1];
    
    if(a[x - 1] == b[y - 1])
    {
        dp[x - 1][y - 1] = 1 + solve(a, b, x - 1, y -1);
    }
    else
    {
        dp[x - 1][y - 1] = max(solve(a, b, x - 1, y), solve(a, b, x, y -1));
    }
    return dp[x - 1][y - 1];
}

int lcs(int x, int y, string s1, string s2){
    
    // your code here
    for(int i = 0; i < x + 1; i++)
    {
        for(int j = 0; j < y + 1; j++) dp[i][j] = -1;
    }
    
    return solve(s1, s2, x, y);
}
