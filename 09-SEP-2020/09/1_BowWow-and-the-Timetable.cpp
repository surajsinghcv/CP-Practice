
// https://codeforces.com/problemset/problem/1204/A

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

int a[1005];

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    string a;
    cin >> a;

    int count = a.length() - 1, n = 0, odd = 0;
    count >>= 1;
    if(a.length() & 1) odd = 1;

    flu(i, 0, a.length())
    {
        if(a[i] == '1') n++;
    }

    if(n == 0)
    {
        cout << 0 << "\n";
        return 0;
    }

    cout << (n == 1 && odd == 1 ? count : count + 1);

    return 0;
}