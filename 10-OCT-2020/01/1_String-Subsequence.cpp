
// https://practice.geeksforgeeks.org/problems/find-number-of-times-a-string-occurs-as-a-subsequence3020/1/?category[]=Dynamic%20Programming&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]Dynamic%20ProgrammingproblemStatusunsolveddifficulty[]0page1

// User function Template for C++

class Solution{
public:
    int countWays(string s1, string s2){
        // code here
        int n = s1.length(), m = s2.length();
        
        int **dp = new int*[n + 1];
        for(int i = 0; i <= n; i++)
            dp[i] = new int[m + 1];
        for(int i = 0; i <= n; i++)
            dp[i][0] = 1;
        for(int i = 1; i <= m; i++)
            dp[0][i] = 0;

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                dp[i][j] = dp[i - 1][j];
                if(s1[i - 1] == s2[j - 1])
                    dp[i][j] += dp[i - 1][j - 1];
            }
        }
        return dp[n][m];
    }
};