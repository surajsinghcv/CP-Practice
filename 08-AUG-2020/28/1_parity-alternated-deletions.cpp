
// https://codeforces.com/problemset/problem/1144/B

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

    int n, odd = 0, even = 0, temp;
    scanf("%d", &n);

    vi o, e;
    flu(i, 0, n)
    {
        scanf("%d", &temp);
        if(temp & 1)
        {
            o.pb(temp);
            odd++;
        }
        else
        {
            e.pb(temp);
            even++;
        }
    }

    if(abs(even - odd) <= 1)
    {
        printf("0\n");
        return 0;
    }

    int ans = 0;
    if(even > odd)
    {
        sort(e.rbegin(), e.rend());
        flu(i, odd + 1, e.size())
        {
            ans += e[i];
        }
    }
    else
    {
        sort(o.rbegin(), o.rend());
        flu(i, even + 1, o.size())
        {
            ans += o[i];
        }
    }

    printf("%d\n", ans);

    return 0;
}