
// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps/0

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

int solve(vector<int> a, int n)
{
    if(a[0] == 0)
        return -1;
    int *dp = new int[n];
    dp[0] = 0;

    for(int i = 1; i < n; i++)
    {
        dp[i] = INT_MAX;
        for(int j = 0; j < i; j++)
        {
            if(a[j] + j >= i && dp[j] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[j] + 1);
            }
        }
    }
    if(dp[n - 1] == INT_MAX)
        return -1;
    return dp[n - 1];
}

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    si(t);

    while(t--)
    {
        int n;
        si(n);

        vi v(n);
        flu(i, 0, n) si(v[i]);

        printf("%d\n", solve(v, n));
    }

    return 0;
}





#else


#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
#define pb push_back
#define mk make_pair

#define si(a) scanf("%d", &a);
#define pi(a) printf("%d ", a);

#define sl(a) scanf("%lld", &a);
#define pl(a) printf("%lld ", a);

#define sc(a) scanf("%c", &a);
#define pc(a) printf("%c ", a);

#define ss(a) scanf("%s", s);
#define ps(a) printf("%s ", s);

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)

#define declare
#include __FILE__
#endif