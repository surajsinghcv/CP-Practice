
// https://codeforces.com/problemset/problem/727/A

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

    int a, n;
    scanf("%d%d", &a, &n);

    bool flag = 1;
    vector<int> v;

    v.pb(n);
    while(n > a)
    {
        if(!(n & 1))
        {
            n >>= 1;
            v.pb(n);
        }
        else
        {
            if(n % 10 == 1)
            {
                n /= 10;
                v.pb(n);
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }

    if(n != a) flag = 0;

    if(flag)
    {
        printf("YES\n%d\n", (int)v.size());
        
        for(int i = (int)v.size() - 1; i >= 0 ; i--)
        {
            printf("%d ", v[i]);
        }
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}