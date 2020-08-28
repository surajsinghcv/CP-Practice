
// https://codeforces.com/problemset/problem/1248/B

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

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)


int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n;
    scanf("%d", &n);

    vi v(n);
    flu(i, 0, n)
    {
        scanf("%d", &v[i]);
    }
    sort(v.rbegin(), v.rend());

    ll x(0), y(0), i(0), j(n - 1);
    while(i <= j)
    {
        if(i == j)
        {
            x += v[i];
            break;
        }
        x += v[i++];
        y += v[j--];
    }

    printf("%lld\n", x*x + y*y);

    return 0;
}