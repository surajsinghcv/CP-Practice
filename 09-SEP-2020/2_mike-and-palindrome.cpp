
// https://codeforces.com/problemset/problem/798/A

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

    int n = a.length(), count = 0;

    for(int i = 0; i < n / 2; i++)
    {
        if(a[i] != a[n - 1 - i]) count++;
    }

    cout << (count == 1 || (count == 0 && n & 1) ? "YES\n" : "NO\n");

    return 0;
}