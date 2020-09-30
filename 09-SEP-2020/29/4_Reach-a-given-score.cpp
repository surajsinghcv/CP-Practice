
// https://practice.geeksforgeeks.org/problems/reach-a-given-score/0/?category[]=Dynamic%20Programming&page=1&query=category[]Dynamic%20Programmingpage1

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

int solve(int a[], int n, int sum)
{
    int **dp = new int*[n + 1];

    for(int i = 0; i <= n; i++)
        dp[i] = new int[sum + 1];

    for(int i = 0; i <= sum; i++)
        dp[0][i] = 1;
    for(int i = 1; i <= n; i++)
        dp[i][0] = 0;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= sum; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if(j >= a[i - 1])
                dp[i][j] += dp[i][j - a[i - 1]];
        }
    }
    return dp[i][j];
}

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t, n = 3, sum;
    si(t);

    int a[] = {3, 5, 10};

    while(t--)
    {
        si(sum);
        pi(solve(a, n, sum))
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