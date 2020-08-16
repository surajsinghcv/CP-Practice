
// https://codeforces.com/contest/1399/problem/B

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
        scanf("%d", &n);

        vi c(n), o(n);
        ll count = 0;
        int temp1, temp2, mic = INT_MAX, mio = INT_MAX, mi;

        flu(i, 0, n)
        {
            scanf("%d", &c[i]);
            mic = min(mic, c[i]);
        }
        flu(i, 0, n)
        {
            scanf("%d", &o[i]);
            mio = min(mio, o[i]);
        }

        flu(i, 0, n)
        {
            temp1 = c[i] - mic;
            temp2 = o[i] - mio;
            mi = min(temp1, temp2);
            count += mi;
            count += abs(temp1 - temp2);
        }

        printf("%lld\n", count);
    }

    return 0;
}