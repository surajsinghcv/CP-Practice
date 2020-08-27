
// https://codeforces.com/problemset/problem/263/B

#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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

    int n, k;
    scanf("%d%d", &n, &k);

    if(k > n)
    {
        printf("-1\n");
        return 0;
    }

    vi v(n);
    flu(i, 0, n)
    {
        scanf("%d", &v[i]);
    }

    sort(v.rbegin(), v.rend());

    printf("%d %d\n", v[k - 1], v[k - 1]);

    return 0;
}