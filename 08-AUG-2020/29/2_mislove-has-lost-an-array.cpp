
// https://codeforces.com/problemset/problem/1204/B

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

    int n, l, r;
    scanf("%d%d%d", &n, &l, &r);

    int ma, mi;

    ma = (1 << (r)) - 1;
    ma += (n - r) * (1 << (r - 1));

    mi = (1 << (l)) - 1;
    mi += (n - l);

    printf("%d %d\n", mi, ma);

    return 0;
}