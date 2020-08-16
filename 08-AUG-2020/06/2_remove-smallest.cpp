
// https://codeforces.com/contest/1399/problem/A

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

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        vi v(n), flag(n, 0);
        flu(i, 0, n)
        {
            scanf("%d", &v[i]);
        }

        sort(v.begin(), v.end());
        int count = 0;
        flu(i, 1, n)
        {
            if(abs(v[i] - v[i - 1]) <= 1 && flag[i] <= 2 && flag[i - 1] <= 2)
            {
                count++;
                flag[i]++;
                flag[i - 1]++;
            }
        }
        n - count == 1 ? printf("YES\n") : printf("NO\n");
    }

    return 0;
}