
// https://www.codechef.com/PRACTICE/problems/CENS20G

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
    string s;
        cin >> s;

        vi v(4, 0);
        int n = (int)s.size();
        flu(i, 0, n)
        {
            if(s[i] == 'R') v[0]++;
            else if(s[i] == 'L') v[1]++;
            else if(s[i] == 'U') v[2]++;
            else v[3]++;
        }

        int x1, y1, x2, y2, q, count;
        cin >> x1 >> y1 >> q;

        bool flag;

        while(q--)
        {
            count = 0;
            flag = 1;
            cin >> x2 >> y2;

            if(x1 >= x2)
            {
                if(abs(x1 - x2) > v[1])
                {
                    flag = 0;
                }
                else
                {
                    count += abs(x1 - x2);
                }
            }
            else
            {
                if(abs(x2 - x1) > v[0])
                {
                    flag = 0;
                }
                else
                {
                    count += abs(x2 - x1);
                }
            }
            if(y1 >= y2)
            {
                if(abs(y1 - y2) > v[3])
                {
                    flag = 0;
                }
                else
                {
                    count += abs(y1 - y2);
                }
            }
            else
            {
                if(abs(y2 - y1) > v[2])
                {
                    flag = 0;
                }
                else
                {
                    count += abs(y2 - y1);
                }
            }
            if(flag)
            {
                cout << "YES " << count << "\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        return;
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