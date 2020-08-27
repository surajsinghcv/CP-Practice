
// https://codeforces.com/problemset/problem/1201/A
             
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


int32_t main()
{
    // fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    string a[n];

    flu(i, 0, n)
    {
        cin >> a[i];
    }

    int fre[5], count = 0;
    vi marks(m);

    flu(i, 0, m) cin >> marks[i];

    flu(i, 0, m)
    {
        flu(j, 0, 5)
        {
            fre[j] = 0;
        }

        flu(j, 0, n)
        {
            fre[a[j][i] - 'A']++;
        }

        int ma = 0;
        flu(j, 0, 5)
        {
            ma = max(ma, fre[j]);
        }

        count += ma * marks[i];
    }

    cout << count << "\n";

    return 0;
}