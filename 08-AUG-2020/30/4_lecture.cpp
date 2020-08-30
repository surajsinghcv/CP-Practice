
// https://codeforces.com/problemset/problem/499/B

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

    int n, m, la, lb;
    cin >> n >> m;

    map<string, string> mp;
    string a, b;

    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        a.length() <= b.length() ? mp[b] = a : mp[a] = b;
    }

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(mp.find(a) != mp.end())
        {
            cout << mp[a] << " ";
        }
        else
        {
            cout << a << " ";
        }
    }
    cout << "\n";

    return 0;
}