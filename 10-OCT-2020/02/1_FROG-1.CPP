
// https://atcoder.jp/contests/dp/tasks/dp_a

#include<bits/stdc++.h>
using namespace std;

int n, v[100005];
long long dp[100005];

long long solve(int n)
{
    if(n == 0)
        return 0;
    if(n < 0)
        return INT_MAX;
    if(dp[n] != -1)
        return dp[n];
    dp[n] = solve(n - 1) + abs(v[n] - v[n - 1]);
    dp[n] = min(dp[n], solve(n - 2) + abs(v[n] - v[n - 2]));
    return dp[n];
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> v[i];

    memset(dp, -1, sizeof dp);

    cout << solve(n - 1);

    return 0;
}