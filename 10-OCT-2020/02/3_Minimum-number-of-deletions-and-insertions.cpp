
// https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1

class Solution{
    public:
    int minOperations(string s1, string s2) 
    { 
        // Your code goes here
        int n = s1.length(), m = s2.length();
        int **dp = new int*[n + 1];
        for(int i = 0; i <= n; i++)
            dp[i] = new int[m + 1];

        for(int i = 0; i <= n; i++)
            dp[i][0] = i;
        for(int i = 0; i <= m; i++)
            dp[0][i] = i;

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(s1[i - 1] == s2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1];
                else
                    dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + 1;
            }
        }
        return dp[n][m];
    } 
};