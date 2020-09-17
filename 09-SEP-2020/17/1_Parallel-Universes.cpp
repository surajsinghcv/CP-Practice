
// https://codeforces.com/gym/295326/problem/A

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


int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, k, m, t;
    si(n); si(k); si(m); si(t);

    int a, b;

    while(t--)
    {
        si(a); si(b);
        if(a == 1)
        {
            n++;
            if(b <= k) k++;
        }
        else
        {
            if(b < k) k -= b;
            else b = n - b;
            n -= b;
        }
        pi(n);
        printf(" ");
        pi(k);
        printf("\n");
    }

    return 0;
}