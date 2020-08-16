
// https://www.codechef.com/AUG20B/problems/LINCHESS       

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
        int n, m, ma = INT_MAX, k, ans = -1;
        scanf("%d%d", &n, &k);

        flu(i, 0, n)
        {
            scanf("%d", &m);

            if(m <= k && k % m == 0)
            {
                if(ma > k / m)
                {
                    ma = k / m;
                    ans = m;
                }
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}