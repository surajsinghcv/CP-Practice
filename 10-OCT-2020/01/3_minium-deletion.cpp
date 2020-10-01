
// https://practice.geeksforgeeks.org/problems/minimum-deletitions/0

#include<bits/stdc++.h>
using namespace std;

int solve(string a)
{
    int n = a.length();
    string b(a.rbegin(), a.rend());
    int **dp = new int*[n + 1];
    for(int i = 0; i <= n; i++){
        dp[i] = new int[n + 1];
    }

    for(int i = 0; i <= n; i++){
        dp[i][0] = 0;
        dp[0][i] = 0;
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j] ,dp[i][j - 1]);
        }
    }
    return n - dp[n][n];
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << "\n";
    }

    return 0;
}