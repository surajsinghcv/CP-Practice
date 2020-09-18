
// https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-flood-1/description/

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
    flu(i, 0, n + 1)
    {
        p[i] = i;
    }

    return;
}

int find(int x)
{
    if(p[x] == x) return x;
    return p[x] = find(p[x]);
}

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, a, b, q;
    si(n);

    init(n);

    si(q);
    while(q--)
    {
        si(a);
        si(b);

        a = find(a);
        b = find(b);

        p[b] = a;
    }

    int count = 0;

    flu(i, 1, n + 1)
    {
        if(p[i] == i) count++;
    }

    pi(count);

    return 0;
}