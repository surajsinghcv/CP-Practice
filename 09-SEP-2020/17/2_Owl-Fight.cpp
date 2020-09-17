
// https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/owl-fight/description/

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

int p[100005];

void init(int n)
{
    for(int i = 0; i <= n; i++)
    {
        p[i] = i;
    }
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

    if(a >= b) p[b] = a;
    else p[a] = b;

    return;
}

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, m, u, v, a, b;
    si(n); si(m);

    init(n);

    flu(i, 0, m)
    {
        si(u); si(v);
        Union(u, v);
    }

    int q;
    si(q);

    while(q--)
    {
        si(u); si(v);
        a = find(u);
        b = find(v);

        if(a == b)
        {
            printf("TIE\n");
        }
        else if(a > b)
        {
            pi(u);
            printf("\n");
        }
        else
        {
            pi(v);
            printf("\n");
        }
    }

    return 0;
}