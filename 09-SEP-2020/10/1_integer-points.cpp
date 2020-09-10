
// https://codeforces.com/problemset/problem/1248/A

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

    ll t, n, m, temp, on, en, om, em;
    scanf("%lld", &t);

    while(t--)
    {
        scanf("%lld", &n);
        on = en = om = em = 0;

        flu(i, 0, n)
        {
            scanf("%lld", &temp);
            temp & 1 ? on++ : en++;
        }

        scanf("%lld", &m);
        flu(i, 0, m)
        {
            scanf("%lld", &temp);
            temp & 1 ? om++ : em++;
        }

        printf("%lld\n", on*om + en*em);
    }

    return 0;
}