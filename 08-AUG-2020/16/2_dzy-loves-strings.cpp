
// https://codeforces.com/contest/447/problem/B

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

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    string s;

    int k, ma = 0, count = 0;
    vi v(26);

    cin >> s >> k;
    int n = s.size();
    
    flu(i, 0, 26)
    {
        cin >> v[i];
        ma = max(ma, v[i]);
    }

    flu(i, 1, n + 1)
    {
        count += i*v[s[i-1] - 'a'];
    }
    flu(i, n + 1, n + k + 1)
    {
        count += i*ma;
    }

    cout << count << "\n";

    return 0;
}