
// https://www.codechef.com/CSEP2020/problems/TOBY

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

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)


int32_t main()
{
    fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    cin >> t;

    while(t--)
    {
        int n, x = 0, y = 0;
        string a;

        vi ans(4, 0);

        cin >> n >> a;

        flu(i, 0, n)
        {
            if(a[i] == 'U') y++;
            else if(a[i] == 'D') y--;
            else if(a[i] == 'R') x++;
            else x--;
        }

        cout << n - abs(x) - abs(y) << "\n";
    }

    return 0;
}