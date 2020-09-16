
// https://www.codechef.com/problems/DISHOWN

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

int p[10005], s[10005];

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

    int t;
    si(t);

    while(t--)
    {
        int n, m, q, temp, a, b;
        si(n);

        init(n);

        flu(i, 1, n + 1)
        {
            si(s[i]);
        }

        si(q);

        while(q--)
        {
            si(temp);
            if(temp == 0)
            {
                si(a); si(b);
                a = find(a);
                b = find(b);

                if(a == b)
                {
                    printf("Invalid query!\n");
                }
                else
                {
                    if(s[a] > s[b])
                    {
                        p[b] = a;
                    }
                    else if(s[a] < s[b])
                    {
                        p[a] = b;
                    }
                }
            }
            else
            {
                si(a);
                a = find(a);
                pi(p[a]);
                printf("\n");
            }
        }
    }

    return 0;
}