
// https://codeforces.com/contest/1216/problem/C       

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

    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    flu(i, 0, 2)
    {
        scanf("%d%d%d%d", &x3, &y3, &x4, &y4);

        if(x3 <= x1 && x2 <= x4)
        {
            if(y3 <= y1) y1 = max(y1, y4);
            if(y4 >= y2) y2 = min(y2, y3);
        }

        if(y3 <= y1 && y2 <= y4)
        {
            if(x3 <= x1) x1 = max(x1, x4);
            if(x4 >= x2) x2 = min(x2, x3);
        }
    }

    (x1 >= x2 || y1 >= y2) ? printf("NO\n") : printf("YES\n");

    return 0;
}