
// https://www.codechef.com/problems/LECANDY       

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
    scanf("%d", &t);

    while(t--)
    {
        int n, c, temp;
        scanf("%d%d", &n, &c);

        flu(i, 0, n)
        {
            scanf("%d", &temp);
            c -= temp;
        }

        c < 0 ? printf("No\n") : printf("Yes\n");
    }

    return 0;
}