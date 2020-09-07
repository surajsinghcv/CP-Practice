
// https://codeforces.com/problemset/problem/217/A

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

vector<pair<int, int>> v(105);
vector<int> p(1005);

int find(int x)
{
    if(p[x] == x)
    {
        return x;
    }

    p[x] = find(p[x]);

    return p[x];
}

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n;
    scanf("%d", &n);

    flu(i, 0, n + 1)
    {
        p[i] = i;
    }

    flu(i, 1, n + 1)
    {
        scanf("%d %d", &v[i].first, &v[i].second);
    }

    flu(i, 1, n)
    {
        flu(j, i + 1, n + 1)
        {
            if(v[i].first == v[j].first || v[i].second == v[j].second)
            {
                if(find(i) != find(j))
                {
                    p[find(j)] = find(i);
                }
            }
        }
    }

    int count = 0;

    flu(i, 1, n + 1)
    {
        if(p[i] == i) count++;
    }

    printf("%d\n", count - 1);

    return 0;
}