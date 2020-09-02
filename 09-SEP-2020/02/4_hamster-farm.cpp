
// https://codeforces.com/problemset/problem/939/B

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

    ll n, k, index = 0, ma = 1000000000000000001, m, ans;
    scanf("%lld %lld", &n, &k);

    for(ll i = 0; i < k; i++)
    {
        scanf("%lld", &m);
        if(n % m < ma)
        {
            ma = n % m;
            index = i;
            ans = n / m;
        }
    }

    printf("%lld %lld\n", index + 1, ans);

    return 0;
}