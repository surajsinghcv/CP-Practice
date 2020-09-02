
// https://codeforces.com/problemset/problem/847/M

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

    int n;
    scanf("%d", &n);

    vi v(n);
    flu(i, 0, n)
    {
        scanf("%d", &v[i]);
    }

    int diff = v[1] - v[0];
    bool flag(1);

    flu(i, 1, n)
    {
        if(v[i] - v[i - 1] != diff)
        {
            flag = 0;
            break;
        }
    }

    flag ? printf("%d\n", v[n - 1] + diff) : printf("%d\n", v[n - 1]);

    return 0;
}