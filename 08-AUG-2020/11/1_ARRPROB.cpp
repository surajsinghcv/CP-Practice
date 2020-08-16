
// https://www.codechef.com/problems/ARRPROB

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


int main()
{
    fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        ll sum = 0;
        scanf("%d", &n);

        vi v(n);

        flu(i, 0, n)
        {
            scanf("%d", &v[i]);
            sum += v[i];
        }

        flu(i, 0, n)
        {
            printf("%lld ", sum - v[i]);
        }
        printf("\n");
    }

    return 0;
}