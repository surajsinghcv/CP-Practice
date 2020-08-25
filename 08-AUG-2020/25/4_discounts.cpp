
// https://codeforces.com/problemset/problem/1132/B             

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


int main()
{
    // fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n;
    ll sum = 0;
    scanf("%d", &n);

    vi v(n);
    flu(i, 0, n)
    {
        scanf("%d", &v[i]);
        sum += v[i];
    }

    sort(v.rbegin(), v.rend());

    int q, m;
    scanf("%d", &q);

    flu(i, 0, q)
    {
        scanf("%d", &m);
        printf("%lld\n", sum - v[m - 1]);
    }

    return 0;
}