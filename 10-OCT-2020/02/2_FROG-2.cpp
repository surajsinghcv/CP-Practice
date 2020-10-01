
// https://atcoder.jp/contests/dp/tasks/dp_b

#include<bits/stdc++.h>
using namespace std;

int n, v[100005], k;
long long dp[100005];

long long solve(int in)
{
    if(in == n - 1)
        return 0;
    if(dp[in] != -1)
        return dp[in];
    long long temp = 1e9 + 5;
    for(int i = 1; i <= k; i++)
        if(in + i < n)
            temp = min(temp, abs(v[in + i] - v[in]) + solve(in + i));
    return dp[in] = temp;
}

int main()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> v[i];

    memset(dp, -1, sizeof dp);

    cout << solve(0);

    return 0;
}