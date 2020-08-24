
// https://www.codechef.com/COOK121B/problems/POLYREL

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

    int t;
    cin >> t;

    while(t--)
    {
        int n, count = 0, x, y;
        cin >> n;
        count += n;

        flu(i, 0, n)
        {
            cin >> x >> y;
        }

        while(n >= 6)
        {
            n /= 2;
            count += n;
        }

        cout << count << "\n";
    }

    return 0;
}