
// https://codeforces.com/problemset/problem/805/B

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
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    string a = "abc";
    int i = 0, n;

    cin >> n;
    bool flag = 1;

    while(i < n)
    {
        flu(j, 0, 2)
        {
            if(i == n)
            {
                break;
            }
            cout << "a";
            i++;
        }

        flu(j, 0, 2)
        {
            if(i == n)
            {
                break;
            }
            cout << "b";
            i++;
        }
    }

    return 0;
}