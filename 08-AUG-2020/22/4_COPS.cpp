
// https://www.codechef.com/problems/COPS

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
    // fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int m, x, y;
        scanf("%d%d%d", &m, &x, &y);

        vi v(102, 0);
        int s, e, temp;

        flu(i, 0, m)
        {
            scanf("%d", &temp);
            s = max(1, temp - x *y);
            e = min(100, temp + x * y);

            v[s]++;
            v[e + 1]--;
        }

        int count = 0;

        flu(i, 1, 101)
        {
            v[i] += v[i - 1];
            if(v[i] == 0) count++;
        }

        printf("%d\n", count);
    }

    return 0;
}