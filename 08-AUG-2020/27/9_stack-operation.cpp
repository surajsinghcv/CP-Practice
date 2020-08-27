
// https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/stakth-1-e6a76632/
            
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
    ll ma = INT_MIN;
    scanf("%d%d", &n, &k);

    if(n == 1 && k & 1)
    {
        if(k & 1)
        {
            printf("-1\n");
            return 0;
        }
        else
        {
            scanf("%lld", &ma);
            printf("%lld\n", ma);
            return 0;
        }
    }

    vector<ll> v(n);
    if(k > n) k = n;
    flu(i, 1, k)
    {
        scanf("%lld", &v[i]);
        ma = max(ma, v[i]);
    }
    scanf("%lld%lld", &v[0], &v[0]);
    ma = max(ma, v[0]);

    printf("%lld\n", ma);

    return 0;
}