
// https://codeforces.com/problemset/problem/368/A

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

    int n, d;
    scanf("%d%d", &n, &d);

    vi v(n);
    flu(i, 0, n)
    {
        scanf("%d", &v[i]);
    }

    sort(v.begin(), v.end());

    flu(i, 1, n)
    {
        v[i] += v[i - 1];
    }

    int m;
    scanf("%d", &m);

    if(n >= m)
    {
        printf("%d\n", v[m - 1]);
    }
    else
    {
        printf("%d\n", (v[n - 1] - (m - n) * d));
    }

    return 0;
}