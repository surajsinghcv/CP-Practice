
// https://codeforces.com/problemset/problem/1144/C#

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
#define max 200005

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, m;
    scanf("%d", &n);

    vi v(max, 0);

    flu(i, 0, n)
    {
        scanf("%d", &m);
        v[m]++;
        if(v[m] > 2)
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n%d\n", (int)count(v.begin(), v.end(), 2));

    for(int i = 0; i < max; i++)
    {
        if(v[i] == 2)
        {
            printf("%d ", i);
            v[i]--;
        }
    }

    printf("\n%d\n", (int)count(v.begin(), v.end(), 1));

    for(int i = max - 1; i >= 0; i--)
    {
        if(v[i] == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}