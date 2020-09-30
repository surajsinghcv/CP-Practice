
// https://practice.geeksforgeeks.org/problems/pairs-with-specific-difference/0

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    si(t);

    while(t--)
    {
        int n;
        si(n);

        vi v(n);
        flu(i, 0, n) si(v[i]);

        int k;
        si(k);

        sort(v.rbegin(), v.rend());
        int sum = 0;
        flu(i, 0, n - 1)
        {
            if(v[i] - v[i + 1] < k)
            {
                sum += v[i] + v[i + 1];
                i++;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}





#else


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

#define declare
#include __FILE__
#endif