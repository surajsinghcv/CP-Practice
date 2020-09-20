
// https://www.hackerrank.com/challenges/the-power-sum/problem

#include<bits/stdc++.h>

using namespace std;

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

int pow(int a, int b)
{
    int p = 1;
    for(int i = 0; i < b; i++)
    {
        p *= a;
    }
    return p;
}

int solve(int x, int n, int i, int ans)
{
    int p = pow(i, n);
    cout << p << "\n";
    if(p > x || ans + p > x)
    {
        return 0;
    }

    if(ans + p == x)
    {
        return 1;
    }

    return solve(x, n, i + 1, ans) + solve(x, n, i + 1, ans + p);
}


int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int x, n;
    cin >> x >> n;

    cout << solve(x, n, 1, 0);

    return 0;
}