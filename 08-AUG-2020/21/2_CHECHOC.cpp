
// https://www.codechef.com/PRACTICE/problems/CHECHOC      

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
        int n, m, x, y;
        scanf("%d%d%d%d", &n, &m, &x, &y);

        int count = n * m;
        int a = count / 2;
        int ans = min(2*x, y);

        if(count == 1)
        {
            printf("%d\n", x);
            continue;
        }

        if(count & 1)
        {
            if(x >= y)
            {
                printf("%d\n",(a + 1) * y);
            }
            else
            {
                printf("%d\n", a * ans + x);
            }
        }
        else
        {
            printf("%d\n", a * ans);
        }
    }

    return 0;
}