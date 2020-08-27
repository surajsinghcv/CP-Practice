
// https://codeforces.com/problemset/problem/1291/A

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

    int t;
    cin >> t;

    while(t--)
    {
        int n, odd = 0, first = -1, last = -1, s = -1;
        cin >> n;

        string a;
        cin >> a;

        for(int i = 0; i < a.length(); i++)
        {
            if((a[i] - '0') & 1)
            {
                if(last == -1) last = i;
                first = i;
                odd++;
            }
            if(a[i] - '0' > 0 && s == -1)
            {
                s = i;
            }
        }

        if(odd < 2)
        {
            cout << "-1\n";
            continue;
        }

        for(int i = 0; i <= first; i++)
        {
            if(i == last && odd & 1 || a[i] == '0')
            {
                continue;
            }
            cout << a[i];
        }
        cout << "\n";
    }

    return 0;
}