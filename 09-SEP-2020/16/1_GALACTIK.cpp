
// https://www.codechef.com/problems/GALACTIK

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

#define si(a) scanf("%d", &a);
#define pi(a) printf("%d ", a);

#define sl(a) scanf("%lld", &a);
#define pl(a) printf("%lld ", a);

#define sc(a) scanf("%c", &a);
#define pc(a) printf("%c ", a);

#define ss(a) scanf("%s", s);
#define ps(a) printf("%s ", s);

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)

int p[100005], c[100005];

void init(int n)
{
    flu(i, 0, n + 1)
    {
        p[i] = i;
        c[i] = INT_MAX;
    }
    return;
}

int find(int x)
{
    if(p[x] == x) return x;
    return p[x] = find(p[x]);
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);

    p[a] = b;
    return;
}

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, m;
    si(n); si(m);

    init(n);

    int a, b;
    flu(i, 0, m)
    {
        si(a);
        si(b);

        Union(a, b);
    }

    flu(i, 1, n + 1)
    {
        si(a);
        b = find(i);
        if(a < 0)
        {
            continue;
        }
        c[b] = min(c[b], a);
    }

    bool flag = 1;
    ll sum = 0;
    int count = 0, ma = INT_MAX;

    flu(i, 1, n + 1)
    {
        if(p[i] == i)
        {
            if(c[i] == INT_MAX)
            {
                flag = 0;
            }
            sum += c[i];
            ma = min(ma, c[i]);
            count++;
        }
    }

    if(count == 1)
    {
        pi(0);
        return 0;
    }
    sum += ma * (count - 2);

    if(flag) 
    {
        pl(sum);
    }
    else
    {
        pi(-1);
    }

    return 0;
}