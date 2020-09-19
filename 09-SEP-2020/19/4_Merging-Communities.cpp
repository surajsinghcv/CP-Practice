
// https://www.hackerrank.com/challenges/merging-communities/problem             

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

int p[100005], r[100005];

void init(int n)
{
    flu(i, 0, n + 1)
    {
        p[i] = i;
        r[i] = 1;
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

    if(a != b)
    {
        if(r[a] >= r[b])
        {
            p[b] = a;
            r[a] += r[b];
        }
        else
        {
            p[a] = b;
            r[b] += r[a];
        }
    }
    return;
}

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, m, a, b;
    cin >> n >> m;

    init(n);
    char c;

    flu(i, 0, m)
    {
        cin >> c;
        if(c == 'M')
        {
            cin >> a >> b;
            Union(a, b);
        }
        else
        {
            cin >> a;
            a = find(a);
            cout << r[a] << "\n";
        }
    }

    return 0;
}