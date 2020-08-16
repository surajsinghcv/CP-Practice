
// https://www.spoj.com/problems/PT07Z/

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

int n, a, b, s, ma;
std::vector<vector<int>> v;

void dfs(int j, int prev, int far)
{
    if(far > ma)
    {
        ma = far;
        s = j;
    }
    for(auto i : v[j])
    {
        if(i != prev)
        {
            dfs(i, j, far + 1);
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    scanf("%d", &n);

    v.resize(n + 1);

    flu(i, 1, n)
    {
        scanf("%d%d", &a, &b);
        v[a].pb(b);
        v[b].pb(a);
    }

    dfs(1, -1, 0);
    dfs(s, -1, 0);

    printf("%d\n", ma);

    return 0;
}