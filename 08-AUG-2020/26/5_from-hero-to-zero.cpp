
// https://codeforces.com/problemset/problem/1175/A
             
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

    int t;
    scanf("%d", &t);

    while(t--)
    {
        ll n, k;
        scanf("%lld%lld", &n, &k);

        ll count = 0, temp;
        while(n != 0)
        {
            if(n % k == 0)
            {
                n /= k;
                count++;
            }
            else
            {
                count += n % k;
                n -= n % k;
            }
        }
        printf("%lld\n", count);
    }

    return 0;
}