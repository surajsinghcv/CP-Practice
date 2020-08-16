
// https://www.codechef.com/DEM2020/problems/TOWIN

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

void solve()
{
    int n;
        cin >> n;
        vi v(n);

        flu(i, 0, n) cin >> v[i];
        sort(v.rbegin(), v.rend());

        ll sum1 = 0, sum2 = 0;

        sum1 += v[0];

        if(n >= 2) sum2 += v[1];
        if(n >= 3) sum2 += v[2];

        flu(i, 3, n)
        {
            if(i & 1) sum1 += v[i];
            else sum2 += v[i];
        }
        if(sum1 == sum2) cout << "draw\n";
        else if(sum1 > sum2) cout << "first\n";
        else cout << "second\n";   
}

int main()
{
    fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}