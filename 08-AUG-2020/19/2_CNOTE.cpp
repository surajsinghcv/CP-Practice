
// https://www.codechef.com/problems/CNOTE        

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

    int t;
    cin >> t;

    while(t--)
    {
        int x, y, k, n, p, c;
        cin >> x >> y >> k >> n;

        bool flag = 0;

        flu(i, 0, n)
        {
            cin >> p >> c;
            if(p + y >= x && c <= k)
            {
                flag = 1;
            }
        }

        flag ? cout << "LuckyChef\n" : cout << "UnluckyChef\n";
    }

    return 0;
}